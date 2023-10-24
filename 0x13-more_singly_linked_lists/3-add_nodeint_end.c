#include "lists.h"

/**
 * add_nodeint_end - main function that adds end of linked list
 * @head: parameter that points to the first element
 * @n: parameter to input data
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b = *head;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);

	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (b->next)
		b = b->next;

	b->next = a;

	return (a);
}
