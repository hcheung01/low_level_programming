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
	listint_t *temp, *cursor;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!head || !temp)
		return (NULL);
	temp->n = n;

	cursor = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	while (cursor != NULL)
	{
		if (count == (idx - 1))
		{
			temp->next = cursor->next;
			cursor->next = temp;
		}
		count++;
		cursor = cursor->next;
	}
	return (temp);

}
