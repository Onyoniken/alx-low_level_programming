#include "lists.h"

/**
 * reverse_listint - main function that reverses list
 * @head: parameter taht points to first node
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *d = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = d;
		d = *head;
		*head = next;
	}
	*head = d;
	return (*head);
}
