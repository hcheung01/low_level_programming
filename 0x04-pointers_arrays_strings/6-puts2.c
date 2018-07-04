#include "holberton.h"

/**
 * puts2 - function with one argument
 * @str: char type pointer
 *
 * Description: prints one char out of 2 of a string
 * Return: na
 */
void puts2(char *str)
{
	int i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		str += 2;
	}
	_putchar('\n');
}
