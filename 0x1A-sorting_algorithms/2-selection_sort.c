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
		minVal = array[min];
		array[min] = array[i];
		array[i] = minVal;
		print_array(array, size);
	}
}
