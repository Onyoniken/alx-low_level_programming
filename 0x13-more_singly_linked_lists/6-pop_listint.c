#include "lists.h"

/**
 * pop_listint - main function that deletes
 * @head: parameter that points to the first element
 *
 * Return: head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *b;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	b = (*head)->next;
	free(*head);
	*head = b;

	return (a);
}
