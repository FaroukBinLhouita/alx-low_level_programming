#include "main.h"

/**
 * leet - incode some letters
 * @s: the string
 * Return: return string
 */
char *leet(char *s)
{
int i, j;
char *letters = "oOlLeEaAtT";
char *numbers = "01347";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}

return (s);
}
