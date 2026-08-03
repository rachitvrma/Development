# Solutions for the questions in Reema Thareja's DSA in C

> **NOTE**\
> This repository is solely meant for my own practice.\
> This repo does not accept any issues. It may be used as a help.

## Overview

This repository contains my solutions to the data‑structures and algorithms
questions from Reema Thareja’s _DSA in C_ book.\
All code is written in plain C and compiled with `gcc`.\
The goal is to practice algorithmic thinking and to keep a record of
solutions that can be referenced later.

## Directory layout

src/
├── Chapter3_Arrays/
│ ├── array_utils.c
│ ├── array_utils.h
│ ├── test.c
│ ├── test1.c
│ └── ... # individual problem solutions
├── Chapter4_Strings/
│ ├── example1.c
│ ├── example2.c
│ └── ... # string‑related problems
└── variadic_functions.c # miscellaneous examples

Each sub‑directory contains the source files for a specific chapter or
topic. The `a.out` files are the compiled binaries from previous runs
and can be ignored.

## Building and running

```bash
# Compile all C files in a chapter
cd src/Chapter_3_Arrays
gcc -Wall -Wextra -O2 *.c -o chapter3

# Run the binary
./chapter3
If you prefer to compile a single file:
gcc -Wall -Wextra -O2 test.c -o test
./test
The repository does not include a Makefile; feel free to add one if you
want to automate builds.
Contributing
This repo is private to my learning process.  
Feel free to fork it for your own practice, but do not open issues or
pull requests against the original repository.
License
All code is released under the MIT license.  
Feel free to use, modify, or redistribute the solutions as you wish.

Feel free to replace the placeholder text with any additional
information you think is useful.
```
