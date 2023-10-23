#include "lists.h"

/**
 * free_listint2 - free the space of the list
 * @head: the first pointer
 *
 * Rerutn: void
 */
void free_listint2(listint_t **head);
{
listint_t *tmp, *next;

if (!head)
{
return;
}

tmp = *head;
while (tmp)
{
next = tmp;
tmp = tmp->next;
free(tmp);
}

*head = NULL;
}
