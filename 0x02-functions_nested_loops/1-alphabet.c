#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 1.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
