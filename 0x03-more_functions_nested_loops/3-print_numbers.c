#include "holberton.h"

/**
 * print_numbers - function with no arguments
 *
 * Description: print numbers with using _putchar from 0 to 9
 * Return: 0 only
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
