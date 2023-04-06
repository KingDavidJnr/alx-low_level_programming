#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm task
 * @str: string for creating hash value
 *
 * Return: The value of hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	// Let's initialize the variables
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
