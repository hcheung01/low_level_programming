#include "coding.h"

/**
 * _strncpy - function with 3 argument
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2nd argument
 * @n: int type 3rd argument
 *
 * Description: copies a string
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
