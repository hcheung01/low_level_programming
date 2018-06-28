#include "holberton.h"

/**
 * print_most_numbers - function with no arguments
 *
 * Description: print 0 - 9 follow by a new line using while loop and _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
