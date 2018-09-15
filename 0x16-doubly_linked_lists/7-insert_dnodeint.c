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
	dlistint_t *new, *temp1, *temp2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h == NULL)
		*h = new;
	else
	{
		temp1 = *h;
		while (temp1 && idx > 0)
		{
			if (idx == 1)
				break;
			temp1 = temp1->next;
			idx--;
		}
		if (idx > 1 || temp1 == NULL)
			return (NULL);
		temp2 = temp1->next;
		temp1->next = new;
		new->prev = temp1;
		new->next = temp2;
		temp2->prev = new;
	}
	return (new);

}
