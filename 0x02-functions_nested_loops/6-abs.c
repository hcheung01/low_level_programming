#include "coding.h"

/**
 * _abs - with one argument
 * @a: First operand
 *
 * Description: using if/else statement to
 * compute absolute value
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
