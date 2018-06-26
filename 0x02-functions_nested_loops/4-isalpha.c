#include "holberton.h"

/*
 * _isalpha() to output return 1 if alphabet or return 0 for other
 * int c is the input
 *
 */ 
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
