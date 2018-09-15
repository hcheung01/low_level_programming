#include "lists.h"

/**
 * insert_dnodeint_at_index - function with three arguments
 * @h: pointer to doubly linked list
 * @idx: index position to insert node
 * @n: value of new node
 *
 * Description: inserting new node into a doubly linked list
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cursor;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* loop until nth node of idx */
	cursor = *h;
	while (idx > 1 && cursor && cursor->next)
	{
		cursor = cursor->next;
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx > 1 || cursor == NULL)
		return (NULL);

	/* assign value to new node */
	new->n = n;

	/* insert node */
	if (cursor->next != NULL)
		cursor->next->prev = new;
	new->prev = cursor;
	new->next = cursor->next;
	cursor->next = new;

	return (new);
}
