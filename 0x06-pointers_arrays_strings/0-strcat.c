#include "main.h"

/**
 * _strcat - make the first string has the value of him and the two
 * @dest: the varabile will be have the whole string
 * @src: keep the same
 * Return: retuen the whole string
 */
char *_strcat(char *dest, char *src)
{
int i, firstSize = 0;

while (dest[firstSize] != '\0')
{
firstSize++;
}

for (i = 0; src[i] != '\0'; i++)
{
dest[firstSize] = src[i];
firstSize++;
}

dest[firstSize] = '\0';

return (dest);
}
