#include "function_pointers.h"
#include <Stdio.h>

/**
 * print_name - prints a name
 * @name: the name fot print
 * @f: a pointer for the printing function
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return;
}
f(name);
}
