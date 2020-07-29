#include "coding.h"

/**
 * _memset - function with 3 arguments
 * @s: char type pointer 1st argument
 * @b: char type 2nd argument
 * @n: int type unsigned 3rd argument
 *
 * Description: fills memory with a constant bye
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
