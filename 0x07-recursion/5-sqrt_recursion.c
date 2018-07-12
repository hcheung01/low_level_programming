#include "holberton.h"

/**
 * _sqrt_recursion - function with one argument
 * @n: int type argument
 *
 * Description: returns the natural square root of a number
 * Return: value of n
 */
int counter(int root, int n)
{
        if (n == (root * root))
                return (root);
        else if (root == n || root == -n)
		return (-1);
	else
		return (counter(root + 1, n));
}

int _sqrt_recursion(int n)
{
	return (counter(0, n));
}
