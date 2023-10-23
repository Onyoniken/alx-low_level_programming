#include "lists.h"
/**
* insert_nodeint_at_index - main function that inserts node at linked lists
* @head: parameter that points the first node
* @idx: index where new node is added
* @n: data that inputs node
*
* Return: pointer to new node || NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *a;
	listint_t *b = *head;

	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}
		for (k = 0; b && k < idx; k++)
		{
			if (k == idx - 1)
			{
				a->next = b->next;
				b->next = a;
				return (a);
			}
			else
				b = b->next;
		}
		return (NULL);

}
