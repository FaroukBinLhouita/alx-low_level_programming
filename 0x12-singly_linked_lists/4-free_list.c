#include "lists.h"

/**
 * free_list - frees the head
 * @head: the address
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *tmp, *nextt;

if (!head)
{
return;
}

nextt = head;
while (nextt)
{
tmp = nextt->next;
free(nextt->str);
free(nextt);
nextt = tmp;
}
}
