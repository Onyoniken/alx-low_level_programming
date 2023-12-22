#include "hash_tables.h"

/**
 * key_index - main function
 * @key: param 1
 * @size: param 2
 *
 * Return: indx
 *
 * Description: djb2
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
