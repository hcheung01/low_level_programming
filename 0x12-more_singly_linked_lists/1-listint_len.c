#include "lists.h"

/**
 * listint_len - function with one argument
 * @h: pointer to a struct of linked list
 *
 * Description: returns the number of elements in a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
