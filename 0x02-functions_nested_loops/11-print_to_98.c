#include "holberton.h"
#include "stdio.h"

/**
 * print_to_98 - function with one argument
 * @n: first operand
 *
 * Description: Print all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	} else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	} else
	{
		printf("%i", n);
	}
	putchar('\n');
}
