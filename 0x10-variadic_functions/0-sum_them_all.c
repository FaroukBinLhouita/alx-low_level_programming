#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all paramteres
 * @n: the number of arguments passed
 *
 * Return: return the sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list all;

va_start(all, n);

for (i = 0; i < n; i++)
{
sum += va_arg(all, int);
}

va_end(all);
return (sum);
}
