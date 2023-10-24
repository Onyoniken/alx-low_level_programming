#include "lists.h"

/**
* free_listint_safe - main function that frees list
* @h: parameter that points first node
*
* Return: no of elements in list freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t a = 0;
int c;
listint_t *b;

if (!h || !*h)
return (0);

while (*h)
{
c = *h - (*h)->next;
if (c > 0)
{
b = (*h)->next;
free(*h);
*h = b;
a++;
}
else
{
free(*h);
*h = NULL;
a++;
break;
}
}

*h = NULL;

return (a);
}

