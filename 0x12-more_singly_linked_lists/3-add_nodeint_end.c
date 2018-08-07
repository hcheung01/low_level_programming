#include "lists.h"

/**
 * add_nodeint_end - function with two arguments
 * @head: double pointer to head of first linked list
 * @n: integer value of data in node
 *
 * Description: add a new node at the end of linked list
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *cursor;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
