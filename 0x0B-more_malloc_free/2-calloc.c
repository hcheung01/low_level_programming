#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - function with two argument
 * @nmemb: member of block
 * @size: size of memory
 *
 * Description: allocates memory for an array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; ptr[i] < ptr[nmemb]; i++)
		ptr[i] = 0;
	return (ptr);
}
