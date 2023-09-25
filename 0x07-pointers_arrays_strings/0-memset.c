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
int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
