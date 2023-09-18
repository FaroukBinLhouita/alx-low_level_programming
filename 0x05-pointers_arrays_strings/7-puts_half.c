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

if (sum / 2 == 0)
{
divided = sum / 2;
for (i = 0; i <= divided; i++)
{
_putchar(str[divided + i]);
}
}
else
{
sum--;
divided = sum / 2;
for (i = 0; i <= (divided + 1); i++)
{
_putchar(str[divided + i]);
}
}
}
