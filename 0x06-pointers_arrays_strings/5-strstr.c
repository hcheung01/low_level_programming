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
	while (haystack[i] != '\0')
	{
		if (haystack[i] == *needle)
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				return (needle + j);
			j++;
		}
		i++;
	}
	return (0);
}