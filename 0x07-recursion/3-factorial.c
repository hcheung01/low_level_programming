#include "holberton.h"

/**
 * factorial - function with 1 argument
 * @n: int type
 *
 * Description: return factorial of a given number
 * Return: n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
