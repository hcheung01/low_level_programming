#include "holberton.h"

/**
 * _strspn - function with two arguments
 * @s: char type pointer 1st argument
 * @accept: char type pointer 2nd argument
 *
 * Description: get the length of a prefix substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				break;
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}
