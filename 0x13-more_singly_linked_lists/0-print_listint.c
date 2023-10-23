#include "lists.h"

/**
 * print_listint - print the whole list
 * @h: the list
 *
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}

return (i);
}
