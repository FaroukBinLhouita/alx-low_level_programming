#include <stdlib.h>
#include "main.h"

/**
 * _strdup - make a copy of the string
 * @str: the main string
 * Return: a copy of string
 */
char *_strdup(char *str)
{
char *tmp;

if (str == NULL)
{
return (NULL);
}

while (*str != '\0')
{
*tmp = malloc(sizeof(char));

if (*tmp == NULL)
{
return (NULL);
}

*tmp = *str;
tmp++;
str++;
}

return (tmp);
}
