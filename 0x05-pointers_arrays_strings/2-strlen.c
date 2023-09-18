#include "main.h"

/**
 * _strlen - know the length of the string
 * @s: the string
 * Return: return a digit
 */
int _strlen(char *s)
{
int sum = 0;
while (*s != '\0')
{
sum++;
s++;
}
return (sum);
}
