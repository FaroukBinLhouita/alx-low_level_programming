#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes a location in the memory to get an array
 * @c: the pointer
 * @size: the size of the array
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
        char *p;
        unsigned int i;
        if (size == 0)
        {
                return (NULL);
        }

        p = malloc(size * sizeof(char));

        if (p == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < size; i++)
        {
                p[i] = c;
        }

        return (p);
}
