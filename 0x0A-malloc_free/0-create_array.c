#include <stdlib.h>
#include "coding.h"

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

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
