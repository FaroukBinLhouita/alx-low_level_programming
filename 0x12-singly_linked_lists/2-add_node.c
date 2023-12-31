#include "lists.h"

/**
 * add_node - add note at begging
 * @head: the new note
 * @str: the contant of the linked list
 *
 * Return: a new node at the begging
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *atfirst = malloc(sizeof(list_t));

if (!head || !atfirst)
{
return (NULL);
}
if (str)
{
atfirst->str = strdup(str);
if (!atfirst->str)
{
free(atfirst);
return (NULL);
}
atfirst->len = strlen(atfirst->str);
}
atfirst->next = *head;
*head = atfirst;
return (atfirst);
}
