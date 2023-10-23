#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: the pointer for first node
 * @index: the index to get
 *
 * Return: an structd data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *get;
unsigned int i;

get = head;
for (i = 0; get && i < index; i++)
{
get = get->next;
}

return (get);
}
