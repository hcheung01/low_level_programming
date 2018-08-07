#include "lists.h"

/**
 * add_nodeint - function with two arguments
 * @head: double pointer to linked list
 * @n: value data of new node
 *
 * Description: adds a new node at the beginning of linked list
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
