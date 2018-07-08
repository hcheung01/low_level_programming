#include "holberton.h"

/**
 * *_strcpy - function with two arguments
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}
