#include <stdio.h>
#include "coding.h"

/**
 * print_diagsums - function with two arguments
 * @a: int type pointer
 * @size: int type argument
 *
 * Description: prints the sum of the two diagonal
 * Return: value
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * (size + 1));
		sum2 += *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
