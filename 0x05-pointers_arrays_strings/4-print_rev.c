#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int sum = 0;
int i;

while (*s != '\0')
{
sum++;
s++;
}

for (i = 0; i < sum; i++)
{
_putchar(s[sum - i - 1]);
}

_putchar('\n');
}
