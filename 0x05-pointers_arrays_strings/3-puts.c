#include "main.h"

/**
 * _puts - print in the terminal the string it takes
 * @str: the string should print
 * Return: void
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
