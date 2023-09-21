#include "main.h"

/**
 * _strncpy - back the the string with the specife element in the the other element
 * @dest: the string
 * @src: the second string who keep his value
 * @n: the number of elements that the first take of the second
 * Return: retuen an string
 */
char *_strncpy(char *dest, char *src, int n)
{
int size;

size = 0;

while (src[size] != '\0' && size < n)
{
dest[size] = src[size];
size++;
}

while (size < n)
{
dest[size] = '\0';
size++;
}

return (dest);
}
