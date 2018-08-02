#include <stdio.h>
#include "lists.h"

/**
 * print_list - function with one argument
 * @h: const pointer type
 *
 * Description: prints all the elements of a list_t list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
