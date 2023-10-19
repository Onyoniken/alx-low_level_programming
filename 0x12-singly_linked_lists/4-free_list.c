#include <stdlib.h>
#include "lists.h"

/**
 * free_list - main function that frees linked list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
