#include "main.h"

/**
 * rev_string - reverse the string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
char *first = s;
char *last = s;

while (*s != '\0')
{
last++;
}
last--;

while (first < last)
{
char temp = *first;
*first = *last;
*last = temp;

first++;
last--;
}
}
