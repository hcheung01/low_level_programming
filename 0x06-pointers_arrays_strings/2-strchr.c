#include "coding.h"

/**
 * _strchr - function with two arguments
 * @s: char type pointer 1st argument
 * @c: char type 2nd argument
 *
 * Description: locates a character in a string
 * Return: character in string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
