#include "lists.h"

/**
 * get_dnodeint_at_index - function with two arguments
 * @head: head pointer to linked list
 * @index: nth node to get node
 *
 * Description: returns the nth node of a doubly linked list
 * Return: nth node or NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *finder;

	if (!head)
		return (NULL);

	finder = head;
	while (index > 0)
	{
		finder = finder->next;
		index--;
	}
	return (finder);
}
