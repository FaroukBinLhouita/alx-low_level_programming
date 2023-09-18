#include "main.h"

/**
 * puts - print every two charchter one
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
int sum = 0;
while (*str != '\0')
{
sum++;
str++;
}

int i;
for (i = 0; i < (sum - 1); i+=2)
{
_putchar(str[i+2]);
}
_putchar('\n');
}
