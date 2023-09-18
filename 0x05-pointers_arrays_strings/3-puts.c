#include "main.h"

/**
 * _puts - print in the terminal the string it takes
 * @str: the string should print
 * Return: void
 */
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}