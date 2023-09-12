#include <main.h>

/**
 * main - print putchar
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
char *string = "_putchar";

for (int i = 0; i < 8; i++)
{
_putchar ("%c", string[i]);
}
_putchar ('\n');
return (0);
}