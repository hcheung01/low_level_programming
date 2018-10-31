#include "sort.h"

/**
 * quick_sort - sorting algorithm
 * @array: unsorted list of integers
 * @size: size of array
 *
 * Description: quicksorting an array of integers
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
void sort(int *array, int l, int h, size_t size)
{
	int p = 0;

	if (l < h)
	{
		p = partition(array, l, h, size);
		sort(array, l, p - 1, size);
		sort(array, p + 1, h, size);
	}
}

unsigned int partition(int *array, int l, int h, size_t size)
{
	int pivot = array[h];
	int i = l;
	int j;

	for (j = l; j <= h; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	swap(&array[i], &array[h]);
	return (i);
}

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
