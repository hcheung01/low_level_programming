#include "holberton.h"

/**
 * print_number - function with one argument
 * @n: int type argument
 *
 * Description: prints an integer
 * Return: value of n
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}
