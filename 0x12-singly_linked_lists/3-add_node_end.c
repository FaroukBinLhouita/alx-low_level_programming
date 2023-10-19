#include "lists.h"

/**
 * add_node_end - add a string to the end
 * @head: the address
 * @str: the string
 * Return: a new node to the end of the link list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *atlast = malloc(sizeof(list_t));
if (!head || !str)
return (NULL);
if (str)
{
atlast->str = strdup(str);
if (!atlast->str)
{
free(atlast);
return (NULL);
}
atlast->len = strlen(str);
}
list_t *tmp = *head;
if (tmp)
{
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = atlast;
}
else
{
*head = atlast;
}
return (atlast);
}
