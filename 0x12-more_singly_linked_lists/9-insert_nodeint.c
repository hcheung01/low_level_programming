#include "lists.h"

/**
 * insert_nodeint_at_index - function with 3 arguments
 * @head: pointer to head pointer of first node in linked list
 * @idx: index of list
 * @n: value integer
 *
 * Description: inserts a new node at a given position
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *cursor, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	cursor = (*head)->next;
	prev = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	if (idx)
	{
		while (cursor != NULL)
		{
			if ((count + 1) == idx)
			{
				temp->next = cursor;
				prev->next = temp;
			}
			count++;
			cursor = cursor->next;
			prev = prev->next;
		}
		return (temp);
	}
	else
		return (NULL);
}
