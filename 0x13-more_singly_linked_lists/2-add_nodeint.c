#include "lists.h"

/**
 * add_nodeint - add a node to the list in the begnning
 * @head: the list
 * @n: the element
 *
 * Return: the size of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_in_first = malloc(sizeof(listint_t));

if (!head || !new_in_first)
{
return (NULL);
}

new_in_first->n = n;
new_in_first->next = NULL;
if (*head)
{
new_in_first->next = *head;
}

*head = new_in_first;
return (new_in_first);
}
