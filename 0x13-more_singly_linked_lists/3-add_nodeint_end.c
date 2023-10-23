#include "lists.h"

/**
 * add_nodeint_end - add a node to the list at the end of the list
 * @head: the list
 * @n: the element
 *
 * Return: the size of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_at_end = malloc(sizeof(listint_t));
listint_t *move;

if (!head || !new_at_end)
{
return (NULL);
}

if (!*head)
{
*head = new_at_end;
}
else
{
*move = *head;
while (move->next)
{
move = move->next;
}
move->next = new_at_end;
}

new_at_end->n = n;
new_at_end->next = NULL;
return (new_at_end);
}
