#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - function with two arguments
 * @s1: char type pointer
 * @s2: char type pointer
 *
 * Description: concatenates two strings
 * Return: Null for failure or concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *empty = "";
	int i, i2, j, k;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;

	ptr = malloc(sizeof(char) * i + i2 + 1);

	if (s1 != NULL)
	{
		j = 0;
		while (s1[j] != '\0')
		{
			ptr[j] = s1[j];
			j++;
		}
	} else
		ptr = empty;

	if (s2 != NULL)
	{
		k = 0;
		while (s2[k] != '\0')
		{
			ptr[j] = s2[k];
			j++;
			k++;
		}
		ptr[j] = '\0';
	}
	return (ptr);
}
