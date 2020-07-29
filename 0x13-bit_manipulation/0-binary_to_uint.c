#include "coding.h"
#include <stdio.h>

int _pow_recursion(int x, int y);
/**
 * binary_to_uint - function with one argument
 * @b: pointer to character
 *
 * Description: converts a binary number to an unsigned int
 * Return: converted number or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int power = 0;
	int count = 0;

	if (!b)
		return (0);
	/* Get length of string */
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}
	count -= 1;
	while (count >= 0)
	{
		if (b[count] == '1')
			value += _pow_recursion(2, power);
		power++;
		count--;
	}
	return (value);
}


/**
 * _pow_recursion - function with two arguments
 * @x: int type 1st argument
 * @y: int type 2nd argument
 *
 * Description: returns the value of x raised to power of y
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
