#include "lists.h"

/**
 * sum_listint - main function that does summation
 * @head: first node
 *
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *b = head;

	while (b)
	{
		sum += b->n;
		b = b->next;
	}
	return (sum);
}
