#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function with one arguments
 * @h: linked list pointer
 *
 * Description: prints all the elements of doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (NULL);
	else
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
