#include "variadic_functions.h"

/**
 * print_strings - print a string
 * @separator: separator between strings
 * @n: number of arguments passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *c;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{
c = va_arg(list, char*);
if (!c)
{
printf('nil');
}
else if (separator && i == 0 || !separator)
{
printf('%s', c);
}
else
{
printf('%s%s', separator, c);
}
}

printf('\n');
va_end(list);
}
