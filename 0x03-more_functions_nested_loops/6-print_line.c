#include "coding.h"

/**
 * print_line - function with one int type argument
 * @n: first argument
 *
 * Description: while loop to draw a straight line
 * Return: na
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
