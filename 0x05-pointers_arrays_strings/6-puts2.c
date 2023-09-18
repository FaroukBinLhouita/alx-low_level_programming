#include "main.h"

/**
 * puts2 - print every two charchter one
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
int sum = 0;
int i;

while (*str != '\0')
{
sum++;
str++;
}

for (i = 0; i < (sum - 1); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
