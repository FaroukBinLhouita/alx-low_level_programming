#include "main.h"

/**
 * puts2 - print every two charchter one
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
int  i, sum = 0;

while (str[sum] != '\0')
{
sum++;
}

for (i = 0; i < sum; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
