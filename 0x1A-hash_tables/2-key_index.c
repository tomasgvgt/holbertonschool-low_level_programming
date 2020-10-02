#include "hash_tables.h"

/**
 * key_index - Gives the index of a key (using the djb2 hash algorithm)
 * @key: Key of string type.
 * @size: size of the hash table.
 * Return: Index for that key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
