#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: the size of allocated it
 * Return: if fail return 98 otherwise void
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
{
free(p);
exit(98);
}

return (p);
}
