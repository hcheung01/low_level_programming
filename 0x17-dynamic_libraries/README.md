# 0x17. C - Dynamic libraries
---
## Description

This project in the Low Level Programming series is about:
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Files
---
File|Task
---|---
coding.h | header file with all function prototypes in this directory
libcoding.so | dynamic library with all my functions
coding.h | primary header file with all function prototypes
1-create_dynamic_lib.sh | script to create library

## Directories
---
Directory Name | Description
---|---
codingschool-low_level_programming/0x17-dynamic_libraries | all files for .so

## How to compile C files for dynamic library
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o <libary.so>
nm -D --defined-only <library.so>

## More Info
All files is formatted Betty style and checked using betty-style.pl and betty-doc.pl
For Bash files, the first line of all my files should is exactly #!/bin/bash and executable

## Author
Heindrick Cheung