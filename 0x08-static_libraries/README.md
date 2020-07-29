# 0x08-static_libraries
---
## Description

This project in the Low Level Programming series is about:
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

## Files
---
File|Task
---|---
coding.h | header file with all function prototypes in this directory
create_static_lib.sh | creates a static library called liball.a from all the .c files
libcoding.a | static library created including all function prototypes in coding.h file

## Directories
---
Directory Name | Description
---|---
0x08-static_libraries | main folder with all C files, .sh files and a header file

## How to compile
Static libary is compiled with the following commands:
ar -t <library.a>
nm <library.a>

gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

## More Info
All files is formatted Betty style and checked using betty-style.pl and betty-doc.pl
For Bash files, the first line of all my files should is exactly #!/bin/bash and executable

## Author
Heindrick Cheung