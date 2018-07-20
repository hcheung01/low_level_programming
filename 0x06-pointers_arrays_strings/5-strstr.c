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
	int index = 0, check;

	while (*(haystack + index) != '\0')
	{
		check = 0;
		while (*(needle + checker) != '\0')
		{
			if (*(haystack + index + checker) == *(needle + checker))
		}
		if (*(needle + checker) == '\0')
			return (haystack + 1);
		index++;
	}
	return ('\0');
}
