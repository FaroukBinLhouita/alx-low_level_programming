#include "main.h"

/**
 * puts_half - print the last half of the string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
int divided, i, sum = 0;

while (str[sum] != '\0')
{
sum++;
}

if (sum % 2 == 0)
{
for (i = sum / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (sum - 1) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
