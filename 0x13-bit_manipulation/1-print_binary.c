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
	if (n != 0)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
