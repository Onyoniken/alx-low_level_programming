#include "lists.h"

/**
 * get_nodeint_at_index - main function that returns the nth node
 * @head: param 1
 * @index: param 2
 *
 * Return: nth node of a linked list if not, return NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *b = head;

	while (b && k < index)
	{
		b = b->next;
		k++;
	}
	return (b ? b : NULL);
}
