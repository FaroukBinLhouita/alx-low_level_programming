#include "main.h"

/**
 * jack_bauer - prints every mints
 * starting 00:00
 */
void jack_bauer(void)
{
int j, i;

i = 0;
while (i < 24)
{
j = 0;

while (j < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
j++;
}
i++;
}
}
