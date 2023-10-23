#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_listint_len - main function
* @head: parameter that points to header
*
* Return: 0 if list nit looped otherwise no of unique nodes
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *a, *b;
size_t c = 1;

if (head == NULL || head->next == NULL)
return (0);

a = head->next;
b = (head->next)->next;

while (b)
{
if (a == b)
{
a = head;
while (a != b)
{
c++;
a = a->next;
b = b->next;
}
a = a->next;
while (a != b)
{
c++;
a = a->next;
}

return (c);
}

a = a->next;
b = (b->next)->next;
}

return (0);
}

/**
* print_listint_safe - main function.
* @head: parameter that points to the head.
*
* Return: no of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
size_t c, d = 0;

c = looped_listint_len(head);

if (c == 0)
{
for (; head != NULL; c++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (d = 0; d < c; d++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (c);
}

