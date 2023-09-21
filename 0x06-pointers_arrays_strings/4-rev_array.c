#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - resverse the array
 * @a: the array
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int *reverse = malloc(n * sizeof(int)), i;

for (i = 0; i < n; i++)
{
reverse[i] = a[n - 1 - i];
}

for (i = 0; i < n; i++)
{
a[i] = reverse[i];
}

free(reverse);
}
