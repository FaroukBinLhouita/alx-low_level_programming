
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
>>>>>>> 8686b60ae6c06176ac5d1d8591be78253acec9af
 */
void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;

while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
