# MsfMania

<div align="center">

![GitHub stars](https://img.shields.io/github/stars/lepotekil/MsfMania?style=flat&color=blue)
![GitHub forks](https://img.shields.io/github/forks/lepotekil/MsfMania?style=flat&color=blue)
![GitHub issues](https://img.shields.io/github/issues/lepotekil/MsfMania?style=flat&color=bue)
![GitHub last commit](https://img.shields.io/github/last-commit/lepotekil/MsfMania?style=flat&color=blue)
![GitHub release](https://img.shields.io/github/v/release/lepotekil/MsfMania?style=flat&color=blue)

![Python](https://img.shields.io/badge/Python-3.8+-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Windows-blue.svg)
![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Docker](https://img.shields.io/badge/Docker-Ready-blue.svg)
![Status](https://img.shields.io/badge/Status-Active-blue.svg)

</div>

MsfMania is a Python-based command-line tool specifically designed to bypass EDR detection on Windows systems.

<div align="center">

## Screenshots

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/lepotekil/MsfMania/blob/dev/assets/images/msfmania-2025.png" alt="MsfMania" width="400"/>
      <br/>
      <sub><b>MsfMania</b></sub>
    </td>
    <td align="center">
      <img src="https://github.com/lepotekil/MsfMania/blob/dev/assets/images/payload-2025.png" alt="Payload Execution Logs" width="400"/>
      <br/>
      <sub><b>Payload Execution Logs</b></sub>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="2">
      <img src="https://github.com/lepotekil/MsfMania/blob/dev/assets/images/virustotal-2021.png" alt="VirusTotal Detection Results" width="600"/>
      <br/>
      <sub><b>VirusTotal Detection Results</b></sub>
    </td>
  </tr>
</table>

</div>

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
- Binary metadata spoofing (version info, company, description, icon, etc...)
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
# docker run --rm -v "$(pwd):/app/output" msfmania:latest python3 main.py -p msfmania/assets/bins/win_x64_msgbox_msfvenom_20251010.bin -o output/payload_test_$(date +%s) --keysize 1 --spoof-bin assets/bins/explorer_11-24H2_KB5065789.exe
                                                                           
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
[~] Compiling to: /app/output/output/payload_test_1760182164.exe
[~] Compiling resource file: /tmp/payload_test_1760182164.rc
[+] Resource file compiled: /tmp/payload_test_1760182164.res
[+] Compilation successful: /app/output/output/payload_test_1760182164.exe
[+] Binary size: 397ko
[+] C source copied to: /app/output/examples/main.c
```

---

## Disclaimer
This project is for educational purposes only. Use it at your own risk.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
