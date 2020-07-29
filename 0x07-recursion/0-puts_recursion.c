#include "coding.h"

/**
 * _puts_recursion - function with 1 argument
 * @s: char type pointer
 *
 * Description: prints a string follow by a new line
 * Return: na
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
