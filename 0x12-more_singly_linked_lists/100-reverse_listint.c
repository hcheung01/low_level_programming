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

	prev = (*head);
	linker = (*head)->next;
	*head = (*head)->next->next;

	prev->next = NULL;

	while ((*head)->next != NULL)
	{
		linker->next = prev;
		prev = linker;
		linker = (*head);
		*head = (*head)->next;
	}
	(*head)->next = prev;
	return (linker);
}
