#include "coding.h"
#include <stdio.h>
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
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
				return ('\0');
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
