#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - function with two arguments
 * @head: pointer to head pointer of first node in a linked list
 * @index: element index in a linked list
 *
 * Description: deletes the node at index of a linked list
 * Return: 1 if succeeded or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor, *c_next;
	unsigned int count = 0;

	cursor = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = cursor->next;
		free(cursor);
		return (1);
	}
	if (index == 1)
	{
		cursor = (*head)->next;
		(*head)->next = cursor->next;
		free(cursor);
		return (1);
	}
	while (count < index - 1)
	{
		if (cursor->next == NULL)
			return (-1);
		count++;
		cursor = cursor->next;
		c_next = cursor->next;
	}
	cursor->next = c_next->next;
	free(c_next);

	return (1);
}
