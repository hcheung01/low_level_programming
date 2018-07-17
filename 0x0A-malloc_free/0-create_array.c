#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - function with two arguments
 * @size: size of the array
 * @c: specific character
 *
 * Description: create an array of chars and initialize with a char
 * Return: Null if 0 or fail or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);
        for (i = 0; i < size; i++)
	{
		ptr[i] = 'H';
	}
	if (!ptr)
		return (NULL);
	else
		return (ptr);
}
