#include "lists.h"

/**
 * dlistint_len - function with one argument
 * @h: pointer to doubly linked list
 *
 * Description: count number of elements in doubly
 * Return: total number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
