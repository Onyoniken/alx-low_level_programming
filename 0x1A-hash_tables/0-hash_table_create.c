#include "hash_tables.h"

/**
 * hash_table_create - main function
 * @size: Param 1
 *
 * Return: null on error otherwise pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int k;

	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		hash_table_created->array[k] = NULL;
	}

	return (hash_table_created);
}
