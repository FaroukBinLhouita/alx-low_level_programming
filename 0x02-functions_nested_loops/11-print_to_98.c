#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Description up or down
 * @n: the number i'll count from
 */
void print_to_98(int n)
{
if (n > 98)
{
for (int i = n; i > 98; i--)
{
if (i != 98)
{
_putchar('%d, ', i);
}
else
{
_putchar('%d', i);
}
}
}

else if (n < 98)
{
for (int i = n; i < 98; ++i)
{
if (i != 98)
{
_putchar('%d, ', i);
}
else
{
_putchar('%d', i);
}
}
}

_putchar('98\n');

}

