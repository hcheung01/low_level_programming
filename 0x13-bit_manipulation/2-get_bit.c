#include "coding.h"

/**
 * get_bit - function with two arguments
 * @n: value to compare
 * @index: position to compare
 *
 * Description: returns the value of a bit at a given index
 * Return: 0 or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n  = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
