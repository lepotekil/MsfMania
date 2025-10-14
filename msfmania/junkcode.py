import os
import re
import random
import glob
from typing import List, Tuple, Dict
from collections import defaultdict


class JunkCodeInjector:
    def __init__(self, junkcode_dir: str = "templates/junkcodes"):
        self.junkcode_dir = junkcode_dir
        self.target_file = "/tmp/main.c"
        self.injection_points = []
    
    def find_injection_points(self, content: str) -> List[Tuple[int, str]]:
        """Find valid injection points in main() function, avoiding loops."""
        injection_points = []
        lines = content.split('\n')
        
        main_func = self._find_main_function(content)
        if not main_func:
            return injection_points
        
        start_line = main_func['start']
        end_line = main_func['end']
        
        in_loop = False
        loop_depth = 0
        brace_depth = 0
        
        for line_num in range(start_line, end_line + 1):
            line = lines[line_num]
            stripped = line.strip()
            
            if not stripped or stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('#'):
                continue
            
            brace_depth += line.count('{') - line.count('}')
            
            # Track loops
            if not in_loop and (re.search(r'\bfor\s*\(', stripped) or 
                               re.search(r'\bwhile\s*\(', stripped) or 
                               re.search(r'\bdo\s*\{', stripped)):
                in_loop = True
                loop_depth = brace_depth
            
            if in_loop and brace_depth < loop_depth:
                in_loop = False
                loop_depth = 0
            
            if in_loop or line_num <= start_line + 5:
                continue
            
            # Valid injection points
            if stripped.endswith(';') and not stripped.startswith('return') and 'return' not in stripped:
                injection_points.append((line_num + 1, 'main'))
            elif stripped == '}' and line_num < end_line - 1:
                injection_points.append((line_num + 1, 'main'))
            elif stripped.startswith('return'):
                injection_points.append((line_num, 'main'))
        
        return injection_points
    
    def _find_main_function(self, content: str) -> Dict:
        """Locate main() function boundaries."""
        lines = content.split('\n')
        
        for i, line in enumerate(lines):
            if re.search(r'\bint\s+main\s*\(\s*\)', line.strip()):
                brace_count = 0
                for j in range(i, len(lines)):
                    brace_count += lines[j].count('{') - lines[j].count('}')
                    if brace_count == 0 and j > i:
                        return {'start': i, 'end': j}
        return None
    
    def create_additional_injection_points(self, needed: int) -> List[Tuple[int, str]]:
        """Reuse existing injection points to reach target count."""
        additional_points = []
        existing_points = self.injection_points.copy()
        
        if not existing_points:
            return additional_points
        
        while len(additional_points) < needed:
            for point in existing_points:
                if len(additional_points) >= needed:
                    break
                additional_points.append(point)
        
        return additional_points[:needed]
    
    def select_junkcode_files(self, n: int) -> List[str]:
        """Randomly select n junkcode files."""
        junkcode_files = glob.glob(os.path.join(self.junkcode_dir, "*.c"))
        if len(junkcode_files) < n:
            return random.choices(junkcode_files, k=n)
        return random.sample(junkcode_files, n)
    
    def extract_function_info(self, file_path: str) -> Dict:
        """Extract function name, body, and includes from junkcode file."""
        with open(file_path, 'r') as f:
            content = f.read()
        
        includes = [line.strip() for line in content.split('\n') if line.strip().startswith('#include')]
        lines = content.split('\n')
        
        for i, line in enumerate(lines):
            match = re.match(r'void\s+(\w+)\s*\(void\)\s*\{', line.strip())
            if match:
                function_name = match.group(1)
                brace_count = 0
                
                for j in range(i, len(lines)):
                    brace_count += lines[j].count('{') - lines[j].count('}')
                    if brace_count == 0:
                        function_body = '\n'.join(lines[i:j + 1])
                        return {
                            'name': function_name,
                            'body': function_body,
                            'includes': includes,
                            'call': f"{function_name}();"
                        }
        return None
    
    def inject_junkcode(self, n: int) -> bool:
        """Inject n junkcode functions into main()."""
        try:
            with open(self.target_file, 'r') as f:
                content = f.read()
            
            self.injection_points = self.find_injection_points(content)
            print(f"[~] Found {len(self.injection_points)} injection points in main()")
            
            if len(self.injection_points) == 0:
                print(f"[!] No injection points found in main()")
                return False
            
            if len(self.injection_points) < n:
                additional = self.create_additional_injection_points(n - len(self.injection_points))
                self.injection_points.extend(additional)
                print(f"[~] Created {len(additional)} additional injection points")
            
            selected_files = self.select_junkcode_files(n)
            
            functions_to_inject = []
            for file_path in selected_files:
                func_info = self.extract_function_info(file_path)
                if func_info:
                    functions_to_inject.append(func_info)
            
            if len(functions_to_inject) == 0:
                print(f"[!] No valid junkcode functions found")
                return False
            
            selected_points = random.sample(self.injection_points, min(len(functions_to_inject), len(self.injection_points)))
            new_content = self._build_injected_content(content, functions_to_inject, selected_points)
            
            with open(self.target_file, 'w') as f:
                f.write(new_content)
            
            if not self.validate_injected_code():
                print(f"[!] Syntax validation failed")
                return False
            
            print(f"[+] {len(functions_to_inject)} junkcodes injected successfully")
            return True
            
        except Exception as e:
            print(f"[x] Error during injection: {e}")
            return False
    
    def _build_injected_content(self, content: str, functions: List[Dict], injection_points: List[Tuple[int, str]]) -> str:
        """Build final content with injected junkcodes."""
        lines = content.split('\n')
        
        # Add missing includes
        all_includes = set()
        for func in functions:
            all_includes.update(func['includes'])
        
        existing_includes = {line.strip() for line in lines if line.strip().startswith('#include')}
        new_includes = all_includes - existing_includes
        
        if new_includes:
            include_insert_pos = 0
            for i, line in enumerate(lines):
                if line.strip().startswith('#include'):
                    include_insert_pos = i + 1
                elif line.strip() and not line.strip().startswith('//'):
                    break
            
            for include in sorted(new_includes):
                lines.insert(include_insert_pos, include)
                include_insert_pos += 1
        
        includes_added = len(new_includes)
        
        # Insert function calls at injection points
        points_by_line = defaultdict(list)
        for pos, context in injection_points:
            points_by_line[pos].append(context)
        
        sorted_lines = sorted(points_by_line.keys(), reverse=True)
        calls_inserted = 0
        func_index = 0
        
        for line_num in sorted_lines:
            if func_index >= len(functions):
                break
            
            adjusted_line = line_num + includes_added
            if adjusted_line >= len(lines):
                continue
            
            # Get indentation from previous line
            indent = "    "
            if adjusted_line > 0:
                indent_match = re.match(r'^(\s*)', lines[adjusted_line - 1])
                if indent_match and indent_match.group(1):
                    indent = indent_match.group(1)
            
            # Insert function calls
            for _ in points_by_line[line_num]:
                if func_index >= len(functions):
                    break
                
                func = functions[func_index]
                lines.insert(adjusted_line, indent + func['call'])
                func_index += 1
                calls_inserted += 1
        
        print(f"[+] Inserted {calls_inserted}/{len(functions)} function calls")
        
        # Insert function definitions before main()
        for i, line in enumerate(lines):
            if re.search(r'int\s+main\s*\(\s*\)', line):
                for func in reversed(functions):
                    lines.insert(i, '')
                    lines.insert(i, func['body'])
                break
        
        final_content = '\n'.join(lines)
        final_content = self._remove_duplicate_functions(final_content)
        final_content = self._add_forward_declarations(final_content, functions)
        
        return final_content
    
    def validate_injected_code(self) -> bool:
        """Validate syntax by checking balanced braces and parentheses."""
        try:
            with open(self.target_file, 'r') as f:
                content = f.read()
            
            brace_count = content.count('{') - content.count('}')
            paren_count = content.count('(') - content.count(')')
            
            if brace_count != 0:
                print(f"[!] Unbalanced braces: {brace_count}")
                return False
            
            if paren_count != 0:
                print(f"[!] Unbalanced parentheses: {paren_count}")
                return False
            
            return True
            
        except Exception as e:
            print(f"[x] Error during validation: {e}")
            return False
    
    def _remove_duplicate_functions(self, content: str) -> str:
        """Remove duplicate function definitions."""
        lines = content.split('\n')
        seen_functions = set()
        new_lines = []
        
        i = 0
        while i < len(lines):
            line = lines[i]
            match = re.match(r'void\s+(\w+)\s*\(void\)\s*\{', line.strip())
            
            if match:
                func_name = match.group(1)
                if func_name in seen_functions:
                    brace_count = 0
                    while i < len(lines):
                        brace_count += lines[i].count('{') - lines[i].count('}')
                        i += 1
                        if brace_count == 0:
                            break
                    continue
                seen_functions.add(func_name)
            
            new_lines.append(line)
            i += 1
        
        return '\n'.join(new_lines)
    
    def _add_forward_declarations(self, content: str, functions: List[Dict]) -> str:
        """Add forward declarations for junkcode functions."""
        lines = content.split('\n')
        
        insert_pos = 0
        for i, line in enumerate(lines):
            if line.strip().startswith('#include'):
                insert_pos = i + 1
            elif line.strip() and not line.strip().startswith('//') and not line.strip().startswith('/*'):
                break
        
        declarations = []
        existing_lines = [line.strip() for line in lines]
        
        for func in functions:
            declaration = f"void {func['name']}(void);"
            if declaration not in existing_lines:
                declarations.append(declaration)
        
        if declarations:
            for i, declaration in enumerate(declarations):
                lines.insert(insert_pos + i, declaration)
            lines.insert(insert_pos + len(declarations), '')
        
        return '\n'.join(lines)


def inject_junkcodes(n: int, junkcode_dir: str = "templates/junkcodes") -> bool:
    """Inject n junkcode functions into target C file."""
    injector = JunkCodeInjector(junkcode_dir)
    
    if not os.path.exists(injector.target_file):
        print(f"[x] Target file {injector.target_file} not found")
        return False
    
    if not os.path.exists(junkcode_dir):
        print(f"[x] Junkcode directory {junkcode_dir} not found")
        return False
    
    return injector.inject_junkcode(n)


def get_available_junkcode_count(junkcode_dir: str = "templates/junkcodes") -> int:
    """Get number of available junkcode files."""
    if not os.path.exists(junkcode_dir):
        return 0
    
    junkcode_files = glob.glob(os.path.join(junkcode_dir, "*.c"))
    return len(junkcode_files)
