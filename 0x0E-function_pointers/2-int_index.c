#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function with 3 arguments
 * @array: pointer to array int type
 * @size: int type
 * @cmp: function pointer
 *
 * Description: searches for an integer
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
