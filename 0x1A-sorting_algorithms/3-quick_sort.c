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
void sort(int *array, size_t start, size_t end, size_t size)
{
