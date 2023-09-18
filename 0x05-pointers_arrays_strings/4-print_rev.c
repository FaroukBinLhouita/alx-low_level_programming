#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int sum = 0;
char *temps = s;

while (*s != '\0')
{
temps++;
s++;
}

for (int i = 0; i < sum; i++)
{
_putchar(s[sum - i - 1]);
}

_putchar('\n');
}
