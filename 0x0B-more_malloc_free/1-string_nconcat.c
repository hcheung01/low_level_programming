#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);

/**
 * *string_nconcat - function with two argument
 * @s1: string type
 * @s2: string type
 * @n: size of string
 *
 * Description: concatenates two strings
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len, count;
	char *ptr;

	len = _strlen(s2);

	if (n >= len)
		ptr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	else
		ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);

        if (s1 == NULL)
		s1 = "";
        if (s2 == NULL)
		s2 = "";

	count = 0;
	while (s1[count] != '\0')
	{
		ptr[count] = s1[count];
		count++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		ptr[count] = s2[i];
		count++;
		i++;
	}
	count++;
	ptr[count] = '\0';
	return (ptr);
}

/**
 * _strlen - Returns the length of a string
 * @s: The given string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int total;

	for (total = 0; s[total] != '\0'; total++)
		;
	return (total);
}
