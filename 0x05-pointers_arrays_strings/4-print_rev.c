#include "main.h"

/**
 * print_rev - print by reserve
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
int sum = 0;
while (*s != ('\0'))
{
sum++;
s++;
}

for (int i = 0; i < sum; i++)
{
_putchar(s[sum - i - 1]);
sum--;
}

_putchar('\n');
}
