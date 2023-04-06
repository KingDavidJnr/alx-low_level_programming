#include "hash_tables.h"

/**
 * key_index - Get the index of the key/value pair
 * @key: The index key.
 * @size: array size of hash table.
 *
 * Return: index of key.
 *
 * Description: utilize the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
