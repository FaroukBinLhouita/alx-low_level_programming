#include "main.h"

/**
 * jack_bauer - prints every mints
 * starting 00:00
 */
void jack_bauer(void)
{
int j, i;

i = 0;
while (i < 24)
{
<<<<<<< HEAD
=======
j = 0;
>>>>>>> 8686b60ae6c06176ac5d1d8591be78253acec9af
while (j < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
<<<<<<< HEAD
}
=======
j++;
}
i++;
>>>>>>> 8686b60ae6c06176ac5d1d8591be78253acec9af
}
}