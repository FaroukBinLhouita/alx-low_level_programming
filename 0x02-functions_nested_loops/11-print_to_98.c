<<<<<<< HEAD
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

=======
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n >= 98)
{
for (j = n; j >= 98; j--)
{
if (j != 98)
printf("%d, ", j);
else if (j == 98)
printf("%d\n", j);
}
}
}
>>>>>>> 8686b60ae6c06176ac5d1d8591be78253acec9af
