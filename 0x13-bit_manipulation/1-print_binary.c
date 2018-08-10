#include "holberton.h"

/**
 * print_binary - function with one argument
 * @n: decimal value
 *
 * Description: prints the binary representation of a number
 * Return: na
 */
void print_binary(unsigned long int n)
{
	unsigned int count, value;
	unsigned int num = n;

	if (n == 0)
		_putchar('0');
	while (num > 0)
	{
		num = num >> 1;
		count++;
	}
	count--;
	while (count >= 0)
	{
		value = n >> count;
		if (value & 1)
			_putchar('1');
		else
			_putchar('0');
		count--;
	}
}
