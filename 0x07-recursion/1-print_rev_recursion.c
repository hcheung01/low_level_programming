#include "coding.h"

/**
 * _print_rev_recursion - function with 1 argument
 * @s: char type pointer argument
 *
 * Description: reverse and print a string using recursion only
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
