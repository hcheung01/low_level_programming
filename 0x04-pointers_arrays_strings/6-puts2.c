#include "coding.h"

/**
 * puts2 - function with one argument
 * @str: char type pointer
 *
 * Description: print one char out of 2 of a string
 * Return: na
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
