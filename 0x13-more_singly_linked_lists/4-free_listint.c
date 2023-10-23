#include "lists.h"

/**
 * free_listint - free the space of the list
 * @head: the first pointer
 *
 * Rerutn: void
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head;
head = head->next
free(tmp);
}
}
