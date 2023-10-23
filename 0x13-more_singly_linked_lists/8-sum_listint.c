#include "lists.h"

/**
 * sum_listint - sum the data
 * @head: the start pointe 
 *
 * Return: the sum of it
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (!head)
{
return (0);
}

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
