#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - take an array a function pointer and pass it by loop
 * @size: the size of the array
 * @action: a pointer for the printing function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (!array || !action)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
