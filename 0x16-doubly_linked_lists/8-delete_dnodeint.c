#include "lists.h"

/**
 * delete_dnodeint_at_index - function with two arguments
 * @head: pointer to double linked list
 * @index: index position to delete node
 *
 * Description: delete node at index position
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	while (head && index && ptr)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr && !index)
	{
		if (ptr->next)
			ptr->next->prev = ptr->prev;
	        if (!ptr->prev)
			*head = ptr->next;
		else
			ptr->prev->next = ptr->next;
		free(ptr);
	}
	return (-1);
}
