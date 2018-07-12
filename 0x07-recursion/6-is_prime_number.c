#include "holberton.h"
int counter(int count, int n);
/**
 * is_prime_number - function with one argument
 * @n: int type argument
 *
 * Description: find prime number
 * Return: 1 if prime, 0 other
 */
int is_prime_number(int n)
{
	return (counter(2, n));
}

int counter(int count, int n)
{
	if (n % count == 0 || n < 2)
		return (0);
	else if (n / count == 1)
		return (1);
	else
		return (counter(count + 1, n));
}
