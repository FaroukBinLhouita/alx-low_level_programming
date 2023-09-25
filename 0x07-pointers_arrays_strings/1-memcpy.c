#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area
 * @dest: destination memory area
 * @n: bytes of the memory area to copy
 *
 * Return: return a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
