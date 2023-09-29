#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the pointer
 * @c: charchter who saved in a string
 *
 * Return: return a string
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if(s[i] == c)
{
return (s);
}
i++;
}

return (NULL);
}
