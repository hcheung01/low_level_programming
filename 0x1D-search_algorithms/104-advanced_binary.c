#include "search_algos.h"

/**
 * advanced_binary - search algorithm
 * @array: array of integer values
 * @size: size of the array
 * @value: to find matching element
 *
 * Description: Recursively split array in halfs until matching elem found
 * Return: -1 if value not present or array is NULL OR index if found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (bs_helper2(array, value, 0, size - 1));
}

/**
 * bs_helper2 - helper for search algorithm
 * @array: array of integer values
 * @key: value to match element
 * @low: lower half of subarray
 * @high: upper half of subarray
 *
 * Description: Recursively split array in halfs until matching elem found
 * Return: -1 if value not present or array is NULL OR index if found
 */
int bs_helper2(int *array, int key, int low, int high)
{
	int mid;

	if (high >= low)
	{
		mid = low + (high - low) / 2;
		helper2(array, low, high);
		if ((mid == 0 || key > array[mid - 1]) && array[mid] == key)
			return (mid);
		else if (key > array[mid])
			return (bs_helper2(array, key, (mid + 1), high));
		else
			return (bs_helper2(array, key, low, mid));
	}
	return (-1);
}

/**
 * helper2 - search algorithm
 * @array: array of integer values
 * @low: lower half of subarray
 * @high: upper half of subarray
 *
 * Description: print sub array for each call
 * Return: na voided function
 */
void helper2(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
