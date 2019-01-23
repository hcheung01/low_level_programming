#include "search_algos.h"

/**
 * binary_search - search algorithm
 * @array: array of integer values
 * @size: size of the array
 * @value: to find matching element
 *
 * Description: Recursively split array in halfs until matching elem found
 * Return: -1 if value not present or array is NULL OR index if found
 */
int binary_search(int *array, size_t size, int value)
{
	int search;

	search = bs_helper(array, value, -1, size);
	if (search)
		return (search);
	return (-1);
}

/**
 * bs_helper - helper function for bsearch
 * @array: array of integer values
 * @key: key to match array element
 * @lower: subarray before mid
 * @higher: subarray after mid
 *
 * Description: Recursively split array in halfs until matching elem found
 * Return: -1 if value not present or array is NULL OR index if found
 */
int bs_helper(int *array, int key, int lower, int higher)
{
	int i;
	int mid;

	if (lower + 1 == higher)
		return (-1);

	printf("Searching in array: ");
	for (i = lower + 1; i < higher; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < higher)
			printf(", ");
	}
	printf("\n");

	mid = (lower + higher) / 2;
	if (array[mid] == key)
		return (mid);

	if (key < array[mid])
		return (bs_helper(array, key, lower, mid));
	else
		return (bs_helper(array, key, mid, higher));
}
