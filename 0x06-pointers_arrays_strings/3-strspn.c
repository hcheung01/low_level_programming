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
	int i, j, count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
