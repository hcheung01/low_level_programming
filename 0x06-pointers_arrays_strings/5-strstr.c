#include "holberton.h"

/**
 * _strstr - function with two argument
 * @haystack: char type pointer
 * @needle: char type pointer
 *
 * Description: locates a substring
 * Return: substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				return (haystack + j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
