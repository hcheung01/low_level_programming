#include "coding.h"

/**
 * print_sign - with one argument
 * @n: is the input for function
 *
 * Description: if/else to check if n is negative
 * zero or positive
 * Return: 1 if greater than 0, 0 if 0, -1 if lesser
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
