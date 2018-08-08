#include "lists.h"

/**
 * reverse_listint - function with one argument
 * @head: pointer to head pointer of linked list
 *
 * Description: reverses a linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *linker;

	if (*head == NULL || head == NULL)
		return (NULL);

	prev = (*head);
	linker = prev->next;
	*head = linker->next;

	if (prev->next != NULL)
		prev->next = NULL;
	else
		return (NULL);

	while ((*head)->next != NULL)
	{
		linker->next = prev;
		prev = linker;
		linker = (*head);
		*head = (*head)->next;
	}
	(*head)->next = linker;
	linker->next = prev;
	linker = *head;
	return (linker);
}
