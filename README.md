# BMP Reader
This repository contains a simple C application that reads a BMP file and prints its headers in a human-readable format. The application supports BMP headers for versions 3, 4, and 5.

## Features
- Reads BMP file headers.
- Prints the width, height, planes, bits per pixel, compression type, image size, and pixels per meter of the BMP file.
- Supports BMP header versions 3, 4, and 5.

## Usage

To run the application, compile it using a C compiler and provide a BMP file as an argument.
```
./bmp_reader example.bmp


Example output:
Width          : 9
Height         : 9
Planes         : 1
Bits/pixel     : 24
Compression    : none
Image Size     : 252
Pixels/meter   : 3779x3779
```

## Building for Different Architectures
This application can be compiled for ARM and RISC-V architectures and run using QEMU.

### ARM
```sh
clang -target arm-linux-gnueabi -o bmp_reader_arm main.c
qemu-arm ./bmp_reader_arm example.bmp
```
### RISC-V
```sh
riscv64-unknown-elf-gcc main.c -o bmp_reader_riscv
qemu-riscv64 ./bmp_reader_riscv example.bmp
```
## Files

* bmp.h: Header file containing BMP header structures.
* bmp.c: Compiler file for reading BMP headers.
* main.c: Main application code for reading and printing BMP headers.

## Requirements
* C compiler (e.g., GCC, Clang)
* QEMU for emulating ARM and RISC-V architectures

##  License
This project is licensed under the MIT License - see the LICENSE file for details.
