#include "main.h"

/**
 * print_to_98 - count to 98
 * Description prints all natural numbers from n to 98
 * @n: the number i'll count from
 */
void print_to_98(int n)
{
if (n > 98)
{
for (int i = n; i > 98; i--)
{
if (i != 98)
{
printf("%i, ", i);
}
else
{
printf("%i", i);
}
}
}

else if (n < 98)
{
for (int i = n; i < 98; ++i)
{
if (i != 98)
{
printf("%i, ", i);
}
else
{
printf("%i", i);
}
}
}

printf("98\n");

}
