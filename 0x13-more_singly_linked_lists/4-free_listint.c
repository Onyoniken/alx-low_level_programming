#include "lists.h"

/**
 * free_listint - main function that frees linked lists
 * @head: parameter to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *b;

	while (head)
	{
		b = head->next;
		free(head);
		head = b;
	}
}
