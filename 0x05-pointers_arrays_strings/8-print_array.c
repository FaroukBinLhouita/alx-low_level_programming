#include "main.h"

/**
 * print_array - print the all array sepreted by comma
 * @a: the array
 * @n: the number of the elements
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%i", a[i]);
}
else
{
printf("%i, ", a[i]);
}
}
printf("\n");
}
