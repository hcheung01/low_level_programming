#include "coding.h"
#include "stdio.h"

/**
 * print_array - function with two argument
 * @a: first argument pointer int type
 * @n: second argument int type
 *
 * Description: prints n element of an array of integers
 * Return: na
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
