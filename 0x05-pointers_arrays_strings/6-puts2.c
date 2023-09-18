#include "main.h"

/**
 * puts2 - print every two charchter one
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
int  i, sum = 0;

while (*str != '\0')
{
sum++;
str++;
}

for (i = 0; i < sum; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
