#include "./hash_tables.h"

/**
 * hash_table_print - main function
 * @ht: pointer
 *
 * Description: description
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int k;
	unsigned char c = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (c == 1)
				printf(", ");

			n = ht->array[k];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
