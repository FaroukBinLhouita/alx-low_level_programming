#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Where it is the number of times the character \ should be print
 */
void print_diagonal(int n)
{
if (n > 0)
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; ++j)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
