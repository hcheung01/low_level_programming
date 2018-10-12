#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: key value to check for index
 * @size: size of array of the hash table
 *
 * Description: find the index with key arg within size for array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
