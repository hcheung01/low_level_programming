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
holberton.h | header file with all function prototypes in this directory
create_static_lib.sh | creates a static library called liball.a from all the .c files
libholberton.a | static library created including all functions I created before and listed below:

## Functions included in static libary
---
Functions
---
int _putchar(char c)
int _islower(int c)
int _isalpha(int c)
int _abs(int n)
int _isupper(int c)
int _isdigit(int c)
int _strlen(char *s)
void _puts(char *s)
char *_strcpy(char *dest, char *src)
int _atoi(char *s)
char *_strcat(char *dest, char *src)
char *_strncat(char *dest, char *src, int n)
char *_strncpy(char *dest, char *src, int n)
int _strcmp(char *s1, char *s2)
char *_memset(char *s, char b, unsigned int n)
char *_memcpy(char *dest, char *src, unsigned int n)
char *_strchr(char *s, char c)
unsigned int _strspn(char *s, char *accept)
char *_strpbrk(char *s, char *accept)
char *_strstr(char *haystack, char *needle)

## Directories
---
Directory Name | Description
---|---
| main folder with all C files, .sh files and a header file

## How to compile
gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

## More Info
All files is formatted Betty style and checked using betty-style.pl and betty-doc.pl
For Bash files, the first line of all my files should is exactly #!/bin/bash and executable

## Author
Heindrick Cheung