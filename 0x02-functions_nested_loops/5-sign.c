#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
<<<<<<< HEAD
	_putchar('+');
        return (1);
}
else if (n == 0)
{
	_putchar('0');
        return (0)
}
else
{
	_putchar('-');
        return (-1);
=======
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
>>>>>>> 8686b60ae6c06176ac5d1d8591be78253acec9af
}
}
