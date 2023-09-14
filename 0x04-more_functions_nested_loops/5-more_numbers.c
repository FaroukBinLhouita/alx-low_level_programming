#include "main.h"

/**
 * more_numbers - print from 0 to 14 ten times with putchar
 * Return: no return
 */
void more_numbers(void)
{
int j = 0;

while (j != 10)
{
for (int i = 0; i < 15; ++i)
{
if (i >= 10)
{
_putchar('0' + i / 10);
}
_putchar('0' + i % 10);
}
_putchar('\n');
j++;
}
}
