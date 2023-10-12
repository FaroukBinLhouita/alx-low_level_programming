#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the string will print between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list dict;

va_start(dict, n);

for (i = 0; i < n; i++)
{
if (!separator)
{
printf("%d", va_arg(dict, int));
}
else if (separator && i == 1)
{
printf("%d", va_arg(dict, int));
}
else
{
printf("%s%d", separator, va_arg(dict, int));
}
}

printf("\n");
va_end(dict);
}
