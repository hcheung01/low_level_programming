#include "sort.h"

/**
 * insertion_sort_list - insert node
 * @list - pointer to stuct node
 *
 * Description: sort array with doubly linked list
 * Return: sorted list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = NULL;

	if (list == NULL || *list == NULL)
		return;

	ptr = (*list)->next;
	while (ptr->next)
	{
		while (ptr->prev && ptr->prev->n > ptr->n)
		{
		        ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			ptr->next = ptr->prev;
			ptr->prev = ptr->prev->prev;
			ptr->next->prev = ptr;
			if (ptr->prev == NULL)
				*list = ptr;
			else
				ptr->prev->next = ptr;
			print_list(*list);
	        }
		ptr = ptr->next;
	}
}
