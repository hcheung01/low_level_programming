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
	int start = 0;
	int end = size - 1;
	int pos;

	if (array == NULL || size == 0)
		return (-1);

	while ((array[end] != array[start]) && (value >= array[start]) &&
	       (value <= array[end]))
	{
		pos = (start + ((end - start) / array[end] - array[start]) *
		       (value - array[start]));

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
