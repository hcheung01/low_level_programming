#include "holberton.h"

/**
 * _strcmp - function with two argument
 * @s1: pointer char type 1st argument
 * @s2: pointer char type 2nd argument
 *
 * Description: compare two strings
 * Return: 0 for same string, other for not same
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
