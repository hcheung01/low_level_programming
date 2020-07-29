#include "coding.h"

/**
 * print_binary - function with one argument
 * @n: decimal value
 *
 * Description: prints the binary representation of a number
 * Return: na
 */
void print_binary(unsigned long int n)
{
	unsigned long value = n;

	if (value > 1)
	{
		print_binary(value >> 1);
	}
	_putchar((value & 1) + '0');
}
