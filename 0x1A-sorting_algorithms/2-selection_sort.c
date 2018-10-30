#include "sort.h"

/**
 * selection_sort - sorting algorithm
 * @array: array of integers
 * @size: size of integers
 *
 * Description: sorts an array of integers using Selection Sort
 * Return: na
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, minVal;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min == i)
			continue;
		minVal = array[i];
		array[i] = array[min];
		array[min] = minVal;
		print_array(array, size);
	}
}
