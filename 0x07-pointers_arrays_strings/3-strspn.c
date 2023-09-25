#include "main.h"

/**
 * _strspn - counting the same charcter in two strings
 * @s: first string
 * @accept: the string
 *
 * Return: return a string
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, num = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
num++;
break;
}
}
}

return (num);
}
