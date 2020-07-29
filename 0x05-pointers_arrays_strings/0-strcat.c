#include "coding.h"

/**
 * _strcat - function with two argument
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2nd argument
 *
 * Description: concatenates two strings
 * Return: na
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
