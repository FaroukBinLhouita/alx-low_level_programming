#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to first element
 * @idx: the index where it put
 * @n: the data
 * Return: the same data with a new insert
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *move;
unsigned int i = 0;
if (!head || !new_node)
{
return (NULL);
}
new_node->n = n;
if (!idx)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
move = *head;
while (move)
{
if (i == idx - 1)
{
new_node->next = move->next;
move->next = new_node;
return (new_node);
}
i++;
move = move->next;
}
free(new_node);
return (NULL);
}
