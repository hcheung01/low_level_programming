#include "holberton.h"

/**
 * _memcpy - function with 3 arguments
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2nd argument
 * @n: unsigned int type 3rd argument
 *
 * Description: copies memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
