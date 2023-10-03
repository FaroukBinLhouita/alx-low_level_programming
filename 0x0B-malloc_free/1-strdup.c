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
unsigned int i, len = 0;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
;

tmp = malloc((i + 1) * sizeof(char));

if (tmp == NULL)
{
return (NULL);
}

for (len = 0; len <= i; len++)
{
tmp[len] = str[len];
}

return (tmp);
}
