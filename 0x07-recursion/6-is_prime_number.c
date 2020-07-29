#include "coding.h"
int counter(int count, int n);
/**
 * is_prime_number - function with one argument
 * @n: int type argument
 *
 * Description: find prime number
 * Return: call to counter fuction with arguments
 */
int is_prime_number(int n)
{
	return (counter(2, n));
}

/**
 * counter - helper function
 * @count: int type 1st argument
 * @n: int type second  argument
 *
 * Description: helper function for counter argument
 * Return: 1 if prime, 0 other
 */
int counter(int count, int n)
{
	if (n % count == 0 || n < 2)
		return (0);
	else if (n / count == 1)
		return (1);
	else
		return (counter(count + 1, n));
}
