#include "hash_tables.h"

/**
 * key_index - returns the index of a key in a hash table array.
 * @key: key to get the index of.
 * @size: the size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
