#include "main.h"

/**
 * _puts - print in the terminal the string it takes
 * @str: the string should print
 * Return: void
 */
void _puts(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
