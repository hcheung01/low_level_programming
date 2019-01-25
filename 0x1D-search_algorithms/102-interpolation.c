#include "search_algos.h"

/**
 * interpolation_search - search algorithm
 * @array: elements of sorted integers
 * @size: size of array
 * @value: value to match element
 *
 * Description: Find matching value to element in the array
 * Return: -1 if no array or if not found OR index of matching element to value
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	unsigned int pos;

	if (array == NULL || size == 0)
		return (-1);

	while ((array[end] != array[start]))
	{
		pos = start + (((double)(end - start)
				/ (array[end] - array[start]))
			       * (value - array[start]));

		if (pos > size)
		{
			printf("Value checked array[%d] is out of range\n"
			       , pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (value > array[pos])
			start = pos + 1;
		else if (value < array[pos])
			end = pos - 1;
		else
			return (pos);
	}

	if (value == array[start])
		return (start);
	else
		return (-1);
}
