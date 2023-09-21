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
int firstSize = 0, secSize = 0;

while (dest[firstSize] != '\0')
{
firstSize++;
}

while (src[secSize] != '\0' && secSize < n)
{
dest[firstSize] = src[secSize];
firstSize++;
secSize++;
}

dest[firstSize] = '\0';

return (dest);
}
