#include "sort.h"

/**
 * bubble_sort - sorting algorithm
 * @array: pointer to array
 * @size: size of the array
 *
 * Description: sort an array of int elements
 * Return: sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t temp = 0;
	size_t flag = 1;

	if (array == NULL || size == 0)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
