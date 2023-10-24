#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: the linked list
 *
 * Return: an integer
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int num;

if (!head || !*head)
{
return (0);
}

tmp = (*head)->next;
num = (*head)->n;
free(*head);
*head = tmp;
return (num);
}
