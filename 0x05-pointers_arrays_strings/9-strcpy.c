#include "main.h"

/**
 * _strcpy - make a copy
 * @src: the original of the string
 * @dest: the copy
 * Return: return a string
 */
char *_strcpy(char *dest, char *src)
{
int sum = 0;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '/0';
return (*dest);
}
