#include "hash_tables.h"

/**
 * hash_table_get - get key/value
 * @ht: pointer to hash table structure
 * @key: key to match
 *
 * Description: look for key in hash table
 * Return: value associated or NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned int index;

	if (ht && key)
	{
		index = key_index((unsigned char *)key, ht->size);
		ptr = ht->array[index];
		if (ptr == NULL)
			return (NULL);
		while (strcmp(ptr->key, key) != 0)
			ptr = ptr->next;
		return (ptr->value);
	}
	return (NULL);
}
