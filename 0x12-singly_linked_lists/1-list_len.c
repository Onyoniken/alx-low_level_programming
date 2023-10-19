#include <stdlib.h>
#include "lists.h"

/**
 * list_len - main function
 * @h: pointer to list_t
 *
 * Return: reckons elements in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
