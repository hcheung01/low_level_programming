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
	int *start, *checker;

	while (*haystack)
	{
		start = *haystack;
		checker = *needle;
		while (*checker && *haystack == *checker)
		{
		        haystack++;
			checker++;
		}
		if (*checker == 0)
			return (start);
		haystack = start + 1;
	}
}
