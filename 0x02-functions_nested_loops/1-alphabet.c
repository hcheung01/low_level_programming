#include "coding.h"

/**
 * print_alphabet - check the code for Coding School students.
 *
 * Description: Print lower case alphabet from a - z
 * using a for loop.
 * Return: Always 1.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
