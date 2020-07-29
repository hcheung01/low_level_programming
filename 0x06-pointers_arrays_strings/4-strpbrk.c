#include "coding.h"

/**
 * _strpbrk - function with two argument
 * @s: char type pointer
 * @accept: char type pointer
 *
 * Description: searches a string for any set of bytes
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
