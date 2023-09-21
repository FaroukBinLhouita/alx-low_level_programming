#include "main.h"

/**
 * _strcmp - compare two stringes
 * @s1: the first element
 * @s2: the second
 * Return: (0) if equal either positive or negtive number
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}

return (*s1 - *s2);
}
