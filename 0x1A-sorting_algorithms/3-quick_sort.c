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
	if (size < 2)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - sorting algorithm
 * @array: unsorted list of integers
 * @l: low index
 * @h: last index
 * @size: size of array
 *
 * Description: recursion method for divide and conquer array and partition
 * Return: void
 */
void sort(int *array, int l, int h, size_t size)
{
	int p;

	if (l < h)
	{
		p = partition(array, l, h, size);
		sort(array, l, p - 1, size);
		sort(array, p + 1, h, size);
	}
}

/**
 * partition - lomuta partition
 * @array: unsorted list of integers
 * @l: low index
 * @h: last index
 * @size: size of array
 *
 * Description: swap elements comparing to last elem pivot
 * Return: i
 */
unsigned int partition(int *array, int l, int h, size_t size)
{
	int pivot = array[h];
	int i = l;
	int j;

	for (j = l; j < h; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j && array[i] != array[j])
			{
				swapper(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != h && array[i] != array[h])
	{
		swapper(&array[i], &array[h]);
		print_array(array, size);
	}
	return (i);
}

/**
 * swapper - swap index
 * @a: pointer to index of an array
 * @b: pointer to index of an array
 *
 * Description: swap elements
 * Return: na
 */
void swapper(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
