#include "coding.h"

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
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
