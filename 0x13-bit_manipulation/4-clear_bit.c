#include "coding.h"

/**
 * clear_bit - function with two arguments
 * @n: pointer to value
 * @index: position to change bit
 *
 * Description: sets the value of a bit to 1 at a given index
 * Return: 1 if worked and -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);

}
