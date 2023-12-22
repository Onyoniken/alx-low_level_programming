#include "hash_tables.h"

/**
 * hash_table_get - main function
 * @ht: pointer param
 * @key: key param
 *
 * Return: 0/1
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *k;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	k = ht->array[idx];
	while (k && strcmp(k->key, key) != 0)
		k = k->next;

	return ((k == NULL) ? NULL : k->value);
}
