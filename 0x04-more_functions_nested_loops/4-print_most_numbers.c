#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9 not 2 and 4
 * Return: no return
 */
void print_most_numbers(void)
{
for (int i = 0; i < 10; ++i)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
