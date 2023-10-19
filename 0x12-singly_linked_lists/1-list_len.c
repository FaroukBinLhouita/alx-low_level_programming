#include "lists.h"

/**
 * list_len - return the number of elements in a linked
 * @h: the linked list
 *
 * Return: return the lenght of elemnts
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
