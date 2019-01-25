#include "search_algos.h"

/**
 * exponential_search - searching algorithm
 * @array: set of sorted integers
 * @size: size of array
 * @value: value to find matching element in the array
 *
 * Description: exponential search algorithm to match value to element
 * Return: -1 if no array or no value found OR index of matching element
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       (bound / 2), min(bound, size - 1));
	return (bs_helper(array, value, (bound / 2 - 1), min(bound + 1, size)));
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

/**
 * min - compare function
 * @a: first parameter to compare
 * @b: second parameter to compare
 *
 * Description: find smallest of the two values
 * Return: smaller value
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
