#include <stdlib.h>
#include "holberton.h"


/**
 * *malloc_checked - voided function with one argument
 * @b: unsigned int argument size of memory
 *
 * Description: allocates memory using malloc
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
