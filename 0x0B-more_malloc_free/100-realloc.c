#include <stdlib.h>
#include "coding.h"

/**
 * *_realloc - function with 3 parameter
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Description: allocate memory for new size
 * Return: pointer to new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
		{
			free(np);
			return (NULL);
		}
		return (np);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	np = malloc(new_size);
	if (np == NULL)
	{
		free(np);
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
		np[i] = *((char *)ptr + i);

	free(ptr);
	return (np);
}
