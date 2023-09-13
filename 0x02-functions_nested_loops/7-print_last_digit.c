#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: get the last digit in this varabile
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;

a = n % 10;

if (a < 0)
{
a = -a;
}

_putchar(a + '0');

return (a);
}
<<<<<<< HEAD

=======
>>>>>>> 8686b60ae6c06176ac5d1d8591be78253acec9af
