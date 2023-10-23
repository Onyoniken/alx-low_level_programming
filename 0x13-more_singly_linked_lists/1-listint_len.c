#include "lists.h"

/**
 * listint_len - main function
 * @h: traverses through elements of a linked list
 *
 * Return: node number
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
