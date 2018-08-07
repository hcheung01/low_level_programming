#include "lists.h"

/**
 * free_listint2 - function with one argument
 * @head: pointer to head pointer of list
 *
 * Description: frees a list
 * Return: na
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		traverse = (*head)->next;
		free(*head);
		*head = traverse;
	}
	*head = NULL;
}
