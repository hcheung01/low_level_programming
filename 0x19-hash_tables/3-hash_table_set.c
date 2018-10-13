#include "hash_tables.h"

/**
 * hash_table_set - Hash table function
 * @ht: pointer to start of table
 * @key: key value of element
 * @value: value of key element
 *
 * Description: add an element to the hash table
 * Return: 1 for success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr = NULL, *node = NULL;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}


	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
