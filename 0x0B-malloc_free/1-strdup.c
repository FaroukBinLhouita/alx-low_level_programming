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
unsigned int i, len;

if (str == NULL)
{
return (NULL);
}

while (str[i])
{
i++;
}

tmp = malloc( (i + 1) * sizeof(char));

if (tmp == NULL)
{
return (NULL);
}

while ((tmp[len] == str[len]) != '\0')
{
len++;
}

return (tmp);
}
