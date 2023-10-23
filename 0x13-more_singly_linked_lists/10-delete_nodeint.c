#include "lists.h"

/**
 * delete_nodeint_at_index - main function that deletes node
 * @head: first element of list
 * @index: node to delete
 *
 * Return: 1 (success), -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *b = *head;
	listint_t *c = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
				free(b);
				return (1);

	}
	while (k < index - 1)
	{
	if (!b || !(b->next))
	return (-1);
	b = b->next;
	k++;
	}
	c = b->next;
	b->next = c->next;
	free(c);

	return (1);

}
