#include "holberton.h"

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
	unsigned long int count = 0;

	count = n >> index;

	if (count & 1)
		return (1);
	else
		return (-1);
}
