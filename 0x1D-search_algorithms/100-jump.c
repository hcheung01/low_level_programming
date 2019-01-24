#include "search_algos.h"

int min(int a, int b)
{
	return a < b ? a : b;
}
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
	unsigned int step = sqrt(size);
	unsigned int left = 0;
	unsigned int right = 0;
	unsigned int i;

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		right = min(size - 1, left + step);
		if (array[left] <= value && array[right] >= value)
			break;
		left += step;
	}
	if (value > array[right])
	{
		printf("Value found between indexes [%d] and [%d]\n",
		       left - step, left);
		printf("Value checked array[%d] = [%d]\n",
		       left - step, array[left - step]);
	}
	else
		printf("Value found between indexes [%d] and [%d]\n",
		       left, right);
	if (left >= size || array[left] > value)
	{
		return (-1);
	}
	right = min(size - 1, right);
	for (i = left; i <= right && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
