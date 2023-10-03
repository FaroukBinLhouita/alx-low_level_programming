#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *tmp;
unsigned int i = 0, len = 0;

if (str == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
i++;
}

tmp = malloc((i + 1) * sizeof(char));

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
