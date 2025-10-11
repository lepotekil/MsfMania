# MsfMania
MsfMania is a Python-based command-line tool specifically designed to bypass EDR detection on Windows systems.

![alt text](https://github.com/lepotekil/MsfMania/blob/master/VirusTotal.png)

![alt text](https://github.com/lepotekil/MsfMania/blob/master/MsfMania.png)

## Summary
* [Features](#Features)
* [Requirements](#Requirements)
* [Installation](#Installation)
* [Usage](#Usage)

## Features
- Polymorphic C stub.
- Local memory injection
- Custom RC4 algorithm payload encryption
- Cross-compilation with MinGW.

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
```
# docker run --rm -v "$(pwd):/app/output" msfmania:latest
                                                                              
                ███╗   ███╗███████╗███████╗███╗   ███╗ █████╗ ███╗   ██╗██╗ █████╗ 
                ████╗ ████║██╔════╝██╔════╝████╗ ████║██╔══██╗████╗  ██║██║██╔══██╗
                ██╔████╔██║███████╗█████╗  ██╔████╔██║███████║██╔██╗ ██║██║███████║
                ██║╚██╔╝██║╚════██║██╔══╝  ██║╚██╔╝██║██╔══██║██║╚██╗██║██║██╔══██║
                ██║ ╚═╝ ██║███████║██║     ██║ ╚═╝ ██║██║  ██║██║ ╚████║██║██║  ██║
                ╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝                                                                                                                                                                                                                   
             Version : 3.0   -   Author : Killian CASAROTTO   -  Updated : 10/11/2025           
    
usage: main.py [-h] -p PAYLOAD -o OUTPUT [-k {1,2,3}] [-s]

options:
  -h, --help            show this help message and exit
  -p, --payload PAYLOAD
                        Select the payload file to use (ex: cobalt64.bin)
  -o, --output OUTPUT   Output path including filename (ex:
                        /path/to/output/payload)
  -k, --keysize {1,2,3}
                        RC4 key size in bytes (1-3)
  -s, --strip           Strip the executable
```
```
# docker run --rm -v "$(pwd):/app/output" msfmania:latest python3 main.py -p msfmania/assets/bins/win_x64_msgbox_msfvenom_20251010.bin -o output/payload
                                                                           
                ███╗   ███╗███████╗███████╗███╗   ███╗ █████╗ ███╗   ██╗██╗ █████╗ 
                ████╗ ████║██╔════╝██╔════╝████╗ ████║██╔══██╗████╗  ██║██║██╔══██╗
                ██╔████╔██║███████╗█████╗  ██╔████╔██║███████║██╔██╗ ██║██║███████║
                ██║╚██╔╝██║╚════██║██╔══╝  ██║╚██╔╝██║██╔══██║██║╚██╗██║██║██╔══██║
                ██║ ╚═╝ ██║███████║██║     ██║ ╚═╝ ██║██║  ██║██║ ╚████║██║██║  ██║
                ╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝                                                                                                                                                                                                                   
             Version : 3.0   -   Author : Killian CASAROTTO   -  Updated : 10/11/2025           
    
[~] Compiling to: /app/output/output/payload.exe
[+] Compilation successful: /app/output/output/payload.exe
[+] Binary stripped: 306ko -> 83ko
[+] C source copied to: /app/output/examples/main.c
```

## Disclaimer
This project is for educational purposes only. Use it at your own risk.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
