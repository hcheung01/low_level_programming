#include "holberton.h"

/**
 * _strncat - pointer function with 3 argument
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2nd argument
 * @n: int type 3rd argument
 *
 * Description: concatenates two strings
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && *src < src[n])
	{
		if (n > 0)
		{
			n = 1;
			*dest = src[n++];
		}
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
