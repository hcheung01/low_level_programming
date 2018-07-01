#include "holberton.h"

/**
 * print_number - function with one type int argument
 * @n: 1st int type argument
 *
 * Description: if/else and recursion to print integer with putchar only
 * Return: na
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
