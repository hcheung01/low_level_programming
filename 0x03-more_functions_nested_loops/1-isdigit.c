#include "coding.h"

/**
 * _isdigit - function with int type input
 * @c: int type input of a single digit
 *
 * Description: will check for digits 0 - 9
 * Return: 1 if c is digit and 0 other
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
