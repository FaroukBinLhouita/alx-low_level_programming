#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
for (int i = 1; i <= size; ++i)
{
for (int j = i; j < size; j++)
{
_putchar(' ');
}

for (int j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}

if (size >= 0)
{
_putchar('\n');
}
}
