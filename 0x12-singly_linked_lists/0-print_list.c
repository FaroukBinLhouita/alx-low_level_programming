#include "lists.h"

/**
 * print_list - print the list
 * @h: the list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
int len = 0;
while (h)
{
printf("[%ld] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
len++;
h = h->next;
}
}
