import os
import struct
import pefile
import random
import string

def generate_random_name(min_length=8, max_length=256):
    """Generate a random valid C identifier"""
    first_char = random.choice(string.ascii_letters + '_')
    remaining_chars = string.ascii_letters + string.digits + '_'
    length = random.randint(min_length - 1, max_length - 1)
    name = first_char + ''.join(random.choice(remaining_chars) for _ in range(length))
    return name

def extract_binary_metadata(target_exe):
    """Extract metadata from target executable using pefile"""
    print(f"[~] Extracting metadata from: {target_exe}")
    
    if not os.path.exists(target_exe):
        print(f"[x] Target file not found: {target_exe}")
        return None
    
    metadata = {
        'file_description': 'Windows Application',
        'file_version': '1.0.0.0',
        'file_version_num': (1, 0, 0, 0),
        'product_name': 'Application',
        'product_version': '1.0.0.0',
        'product_version_num': (1, 0, 0, 0),
        'company_name': 'Microsoft Corporation',
        'copyright': 'Copyright (C) Microsoft Corporation. All rights reserved.',
        'original_filename': os.path.basename(target_exe),
        'internal_name': os.path.splitext(os.path.basename(target_exe))[0],
        'lang_codepage': '040904b0'
    }
    
    try:
        pe = pefile.PE(target_exe)
        
        # Extract numeric version from FixedFileInfo
        if hasattr(pe, 'VS_FIXEDFILEINFO'):
            fixed_info = pe.VS_FIXEDFILEINFO[0]
            file_ver_ms = fixed_info.FileVersionMS
            file_ver_ls = fixed_info.FileVersionLS
            prod_ver_ms = fixed_info.ProductVersionMS
            prod_ver_ls = fixed_info.ProductVersionLS
            
            metadata['file_version_num'] = (
                (file_ver_ms >> 16) & 0xFFFF,
                file_ver_ms & 0xFFFF,
                (file_ver_ls >> 16) & 0xFFFF,
                file_ver_ls & 0xFFFF
            )
            metadata['product_version_num'] = (
                (prod_ver_ms >> 16) & 0xFFFF,
                prod_ver_ms & 0xFFFF,
                (prod_ver_ls >> 16) & 0xFFFF,
                prod_ver_ls & 0xFFFF
            )
        
        # Extract version info using FileInfo
        if hasattr(pe, 'FileInfo'):
            for file_info in pe.FileInfo:
                for file_info_entry in file_info:
                    if hasattr(file_info_entry, 'StringTable'):
                        for string_table in file_info_entry.StringTable:
                            if hasattr(string_table, 'name'):
                                lang_str = string_table.name
                                if isinstance(lang_str, bytes):
                                    lang_str = lang_str.decode('utf-8', errors='ignore')
                                # Only use if it looks like a proper lang/codepage (8 hex chars)
                                if lang_str and len(lang_str) == 8 and all(c in '0123456789abcdefABCDEF' for c in lang_str):
                                    metadata['lang_codepage'] = lang_str
                            
                            for entry in string_table.entries.items():
                                key, value = entry
                                key = key.decode('utf-8', errors='ignore')
                                value = value.decode('utf-8', errors='ignore')
                                
                                if key == 'FileDescription' and value.strip():
                                    metadata['file_description'] = value.strip()
                                elif key == 'FileVersion' and value.strip():
                                    metadata['file_version'] = value.strip()
                                elif key == 'ProductName' and value.strip():
                                    metadata['product_name'] = value.strip()
                                elif key == 'ProductVersion' and value.strip():
                                    metadata['product_version'] = value.strip()
                                elif key == 'CompanyName' and value.strip():
                                    metadata['company_name'] = value.strip()
                                elif key == 'LegalCopyright' and value.strip():
                                    metadata['copyright'] = value.strip()
                                elif key == 'InternalName' and value.strip():
                                    metadata['internal_name'] = value.strip()
                                elif key == 'OriginalFilename' and value.strip():
                                    metadata['original_filename'] = value.strip()
        
        pe.close()
        
    except Exception as e:
        print(f"[x] Failed to parse PE file: {e}")
        return None
    
    print(f"[+] Extracted metadata:")
    print(f"    Description: {metadata['file_description']}")
    print(f"    Version: {metadata['file_version']}")
    print(f"    Company: {metadata['company_name']}")
    print(f"    Product: {metadata['product_name']}")
    
    icons = extract_and_save_icons(target_exe)
    if icons:
        print(f"[+] Extracted {len(icons)} icon(s)")
        for icon in icons:
            print(f"    Icon: {icon['width']}x{icon['height']} {icon['bit_count']}bpp (ID: {icon['icon_id']})")
        metadata['icons'] = icons
    else:
        metadata['icons'] = []
    
    return metadata


def extract_and_save_icons(exe_path):
    """Extract icons from PE file and save as .ico files"""
    if not os.path.exists(exe_path):
        print("[x] Icon extraction: file not found")
        return []
    
    import glob
    old_icons = glob.glob("/tmp/*_icon_*.ico")
    old_rc = glob.glob("/tmp/*.rc")
    old_res = glob.glob("/tmp/*.res")
    
    for old_file in old_icons + old_rc + old_res:
        try:
            os.remove(old_file)
            print(f"[~] Cleaned: {old_file}")
        except:
            pass
    
    try:
        pe = pefile.PE(exe_path)
        
        if not hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
            print("[~] No resources found, continuing without icons")
            pe.close()
            return []
        
        group_icons = []
        icon_data_map = {}
        
        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            if not hasattr(resource_type, 'id') or not isinstance(resource_type.id, int):
                continue
            
            if resource_type.id == 14:
                group_icons = resource_type.directory.entries if hasattr(resource_type, 'directory') else []
            
            elif resource_type.id == 3:
                for icon_entry in resource_type.directory.entries:
                    if not hasattr(icon_entry, 'id') or not isinstance(icon_entry.id, int):
                        continue
                    
                    icon_id = icon_entry.id
                    try:
                        if hasattr(icon_entry, 'directory') and icon_entry.directory:
                            data_entry = icon_entry.directory.entries[0]
                            if hasattr(data_entry, 'data') and hasattr(data_entry.data, 'struct'):
                                offset = data_entry.data.struct.OffsetToData
                                size = data_entry.data.struct.Size
                                icon_blob = pe.get_data(offset, size)
                                icon_data_map[icon_id] = icon_blob
                        elif hasattr(icon_entry, 'data') and hasattr(icon_entry.data, 'struct'):
                            offset = icon_entry.data.struct.OffsetToData
                            size = icon_entry.data.struct.Size
                            icon_blob = pe.get_data(offset, size)
                            icon_data_map[icon_id] = icon_blob
                    except:
                        continue
        
        if not group_icons or not icon_data_map:
            print("[~] No icons found, continuing without icons")
            pe.close()
            return []
        
        print(f"[~] Found {len(group_icons)} icon groups with {len(icon_data_map)} icons")
        
        all_entries = []
        basename = os.path.splitext(os.path.basename(exe_path))[0]
        
        for group_entry in group_icons:
            group_data = None
            if hasattr(group_entry, 'directory') and group_entry.directory:
                for lang_entry in group_entry.directory.entries:
                    try:
                        if hasattr(lang_entry, 'directory') and lang_entry.directory:
                            data_entry = lang_entry.directory.entries[0]
                            if hasattr(data_entry, 'data') and hasattr(data_entry.data, 'struct'):
                                offset = data_entry.data.struct.OffsetToData
                                size = data_entry.data.struct.Size
                                group_data = pe.get_data(offset, size)
                                break
                        elif hasattr(lang_entry, 'data') and hasattr(lang_entry.data, 'struct'):
                            offset = lang_entry.data.struct.OffsetToData
                            size = lang_entry.data.struct.Size
                            group_data = pe.get_data(offset, size)
                            break
                    except:
                        continue
            elif hasattr(group_entry, 'data') and hasattr(group_entry.data, 'struct'):
                try:
                    offset = group_entry.data.struct.OffsetToData
                    size = group_entry.data.struct.Size
                    group_data = pe.get_data(offset, size)
                except:
                    pass
            
            if not group_data or len(group_data) < 6:
                continue
            
            reserved, icon_type, count = struct.unpack('<HHH', group_data[:6])
            offset = 6
            
            for _ in range(count):
                if offset + 14 > len(group_data):
                    break
                
                entry_data = group_data[offset:offset + 14]
                if len(entry_data) != 14:
                    break
                
                width, height, colors, reserved, planes, bit_count, size, icon_id = struct.unpack('<BBBBHHIH', entry_data)
                
                actual_width = 256 if width == 0 else width
                actual_height = 256 if height == 0 else height
                
                if icon_id in icon_data_map:
                    all_entries.append({
                        'width': actual_width,
                        'height': actual_height,
                        'colors': colors,
                        'planes': planes,
                        'bit_count': bit_count,
                        'size': size,
                        'icon_id': icon_id,
                        'data': icon_data_map[icon_id]
                    })
                
                offset += 14
        
        if not all_entries:
            print("[~] No valid icons found, continuing without icons")
            pe.close()
            return []
        
        # Group icons by size and bit depth to avoid duplicates
        unique_icons = {}
        for entry in all_entries:
            key = (entry['width'], entry['height'], entry['bit_count'])
            if key not in unique_icons:
                unique_icons[key] = entry
        
        saved_icons = []
        
        for entry in unique_icons.values():
            ico_path = f"/tmp/{basename}_icon_{entry['icon_id']}.ico"
            
            try:
                with open(ico_path, 'wb') as f:
                    f.write(struct.pack('<HHH', 0, 1, 1))
                    
                    offset = 6 + 16 * 1
                    
                    width_byte = 0 if entry['width'] == 256 else entry['width']
                    height_byte = 0 if entry['height'] == 256 else entry['height']
                    colors_byte = entry['colors'] if entry['colors'] <= 255 else 0
                    
                    f.write(struct.pack('<BBBBHHII', 
                        width_byte, height_byte, colors_byte, 0,
                        entry['planes'], entry['bit_count'],
                        len(entry['data']), offset))
                    
                    f.write(entry['data'])
                
                saved_icons.append({
                    'path': ico_path,
                    'width': entry['width'],
                    'height': entry['height'],
                    'icon_id': entry['icon_id'],
                    'bit_count': entry['bit_count'],
                    'size': len(entry['data'])
                })
            except Exception as e:
                print(f"[x] Failed to write icon {entry['icon_id']}: {e}")
                continue
        
        if saved_icons:
            print(f"[+] Extracted {len(saved_icons)} unique icon(s) from {len(all_entries)} total")
        
        pe.close()
        return saved_icons
        
    except Exception as e:
        print(f"[x] Error extracting icons: {e}")
        return []

