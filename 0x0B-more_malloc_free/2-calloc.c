#include <stdlib.h>
#include "coding.h"

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
	unsigned int i;
	char *ptr;
	void *done;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	done = ptr;
	return (done);
}
