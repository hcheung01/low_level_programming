#include "coding.h"

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
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
