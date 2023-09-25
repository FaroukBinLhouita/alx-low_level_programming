#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the string that return
 * @b: the charcter should save in the string
 * @n: bytes of the memory area
 * 
 * Return: return a string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
