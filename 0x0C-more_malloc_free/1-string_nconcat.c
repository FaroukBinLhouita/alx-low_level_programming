#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatinate two string in a new memory
 * @s1: the first string
 * @s2: the second string
 * @n: the lenght of the memory
 * Return: if it fails return NULL otherwise the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2;
char *p;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (n < j)
{
p = malloc(sizeof(char) * (i + n + 1));
}
else
{
p = malloc(sizeof(char) * (i + j + 1));
}

if (p == NULL)
{
free(p);
return (NULL);
}

for (len1 = 0; s1[len1] != '\0'; len1++)
{
p[len1] = s1[len1];
}

for (len2 = 0; s2[len2] != '\0'; len2++)
{
p[len1 + len2] = s2[len2];
}

p[len1 + len2] = '\0';
return (p);
}
