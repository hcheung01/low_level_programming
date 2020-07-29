#include "coding.h"

/**
 * swap_int - function with two int type pointer argument
 * @a: 1st argument int type
 * @b: 2nd argument int type
 *
 * Description: Using pointer to change value of a and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
