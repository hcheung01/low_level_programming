#include "search_algos.h"

/**
 * jump_search - searching algorithm
 * @array: array of integers, sorted
 * @size: size of the array
 * @value: key value to match an element of the array
 *
 * Description: Using a jump search algorithm to find matching value
 * Return: -1 if not found or index to the matched value
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = 0;
	unsigned int prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev > size)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (value == array[prev])
			return (prev);
		prev++;
	}
	return (-1);
}
