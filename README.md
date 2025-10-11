# MsfMania
MsfMania is a Python-based command-line tool specifically designed to bypass EDR detection on Windows systems.

![alt text](https://github.com/lepotekil/MsfMania/blob/dev/assets/images/virustotal-2021.png)

## Summary
* [Features](#features)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Disclaimer](#disclaimer)
* [License](#license)

## Features
- Polymorphic C stub with variable/function obfuscation
- Local memory injection
- RC4 encryption with configurable key size (1-3 bytes)
- Payload integrity verification using djb2 hash with random salt
- zlib compression before encryption
- Base64 encoding for obfuscation
- Recursive key bruteforce in stub
- Binary metadata spoofing (version info, company, description, etc.)
- Executable stripping for reduced file size
- Cross-compilation with MinGW

## Requirements
- Electricity
- Internet
- Personal Computer or Server
- Operating System (any)
- Docker

## Installation
- Git clone this repository: ```git clone https://github.com/lepotekil/MsfMania.git```
- cd into the MsfMania folder: ```cd MsfMania```
- Build the MsfMania docker image: ```docker build -t msfmania:latest .```

## Usage

### Basic Help
```bash
# docker run --rm -v "$(pwd):/app/output" msfmania:latest
                                                                              
                ███╗   ███╗███████╗███████╗███╗   ███╗ █████╗ ███╗   ██╗██╗ █████╗ 
                ████╗ ████║██╔════╝██╔════╝████╗ ████║██╔══██╗████╗  ██║██║██╔══██╗
                ██╔████╔██║███████╗█████╗  ██╔████╔██║███████║██╔██╗ ██║██║███████║
                ██║╚██╔╝██║╚════██║██╔══╝  ██║╚██╔╝██║██╔══██║██║╚██╗██║██║██╔══██║
                ██║ ╚═╝ ██║███████║██║     ██║ ╚═╝ ██║██║  ██║██║ ╚████║██║██║  ██║
                ╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝                                                                                                                                                                                                                   
             Version : 3.0   -   Author : Killian CASAROTTO   -  Updated : 10/11/2025           
    
usage: main.py [-h] -p PAYLOAD -o OUTPUT [-k {1,2,3}] [-s]
               [--spoof-bin TARGET_EXE]

options:
  -h, --help            show this help message and exit
  -p, --payload PAYLOAD
                        Select the payload file to use (ex: cobalt64.bin)
  -o, --output OUTPUT   Output path including filename (ex:
                        /path/to/output/payload)
  -k, --keysize {1,2,3}
                        RC4 key size in bytes (1-3)
  -s, --strip           Strip the executable
  --spoof-bin TARGET_EXE
                        Spoof binary metadata from target executable (ex:
                        assets/explorer_11-24H2_KB5065789.exe)
```

---

### Complete example
```bash
# docker run --rm -v "$(pwd):/app/output" msfmania:latest python3 main.py -p msfmania/assets/bins/win_x64_msgbox_msfvenom_20251010.bin -o output/payload --strip --spoof-bin assets/bitsadmin_11-21H2_KB5032192.exe
                                                                           
                ███╗   ███╗███████╗███████╗███╗   ███╗ █████╗ ███╗   ██╗██╗ █████╗ 
                ████╗ ████║██╔════╝██╔════╝████╗ ████║██╔══██╗████╗  ██║██║██╔══██╗
                ██╔████╔██║███████╗█████╗  ██╔████╔██║███████║██╔██╗ ██║██║███████║
                ██║╚██╔╝██║╚════██║██╔══╝  ██║╚██╔╝██║██╔══██║██║╚██╗██║██║██╔══██║
                ██║ ╚═╝ ██║███████║██║     ██║ ╚═╝ ██║██║  ██║██║ ╚████║██║██║  ██║
                ╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝                                                                                                                                                                                                                   
             Version : 3.0   -   Author : Killian CASAROTTO   -  Updated : 10/11/2025           
    
[~] Extracting metadata from: assets/bins/explorer_11-24H2_KB5065789.exe
[+] Extracted metadata:
    Description: Windows Explorer
    Version: 10.0.26100.6725 (WinBuild.160101.0800)
    Company: Microsoft Corporation
    Product: Microsoft® Windows® Operating System
[~] Found 23 icon groups with 181 icons
[+] Extracted 26 unique icon(s) from 181 total
[+] Extracted 26 icon(s)
    Icon: 256x256 32bpp (ID: 1)
    Icon: 64x64 32bpp (ID: 2)
    Icon: 48x48 32bpp (ID: 3)
    Icon: 40x40 32bpp (ID: 4)
    Icon: 32x32 32bpp (ID: 5)
    Icon: 24x24 32bpp (ID: 6)
    Icon: 20x20 32bpp (ID: 7)
    Icon: 16x16 32bpp (ID: 8)
    Icon: 32x32 4bpp (ID: 9)
    Icon: 24x24 4bpp (ID: 10)
    Icon: 16x16 4bpp (ID: 11)
    Icon: 32x32 8bpp (ID: 12)
    Icon: 24x24 8bpp (ID: 13)
    Icon: 16x16 8bpp (ID: 14)
    Icon: 48x48 4bpp (ID: 18)
    Icon: 48x48 8bpp (ID: 21)
    Icon: 32x32 1bpp (ID: 40)
    Icon: 40x40 4bpp (ID: 115)
    Icon: 20x20 4bpp (ID: 117)
    Icon: 40x40 8bpp (ID: 119)
    Icon: 20x20 8bpp (ID: 121)
    Icon: 22x22 4bpp (ID: 95)
    Icon: 22x22 8bpp (ID: 96)
    Icon: 64x64 4bpp (ID: 105)
    Icon: 64x64 8bpp (ID: 106)
    Icon: 22x22 32bpp (ID: 108)
[~] Compiling to: /app/output/output/payload_test_1760179998.exe
[~] Compiling resource file: /tmp/payload_test_1760179998.rc
[+] Resource file compiled: /tmp/payload_test_1760179998.res
[+] Compilation successful: /app/output/output/payload_test_1760179998.exe
[+] Binary size: 398ko
[+] C source copied to: /app/output/examples/main.c
```

---

## Disclaimer
This project is for educational purposes only. Use it at your own risk.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
