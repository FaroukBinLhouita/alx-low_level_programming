#include <main.h>

/**
 * print_alphabet - print all alphapt from (a --> z)
 * Return: 0
 */
int print_alphabet(void)
{
char ch = 'a';
while (ch != 'z')
{
    _putchar('%c');
    ch++;
}
_putchar("/n");
}
