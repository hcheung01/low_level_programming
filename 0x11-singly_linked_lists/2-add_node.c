#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Description: adds a new node at the beginning
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = _strdup(str);
	while (str[count] != '\0')
		count++;
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
