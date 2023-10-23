#include "lists.h"

/**
 * listint_len - count the elements
 * @h: the list
 *
 * Return: the size of the list
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}

return (i);
}
