#include "holberton.h"

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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		else
			s = '\0';
		i++;
	}
	return (s);
}
