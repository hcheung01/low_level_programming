#include "coding.h"

/**
 * _strlen_recursion - function with one argument
 * @s: char type pointer argument
 *
 * Description: returns the length of a string
 * Return: pointer s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return ((1) + _strlen_recursion(s));
}
