#include "main.h"

/**
 * _strstr -  subtract
 * @s: the string
 * @accept: any of the bytes in the string
 *
 * Return: return a string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return &haystack[i];
}
}

return (NULL);
}
