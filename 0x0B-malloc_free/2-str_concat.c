#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
unsigned int first, last, i, j;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (first = 0; s1[first]; first++);
for (last = 0; s2[last]; last++);

s3 = malloc((first + last + 1) * sizeof(char));
if (s3 == NULL)
{
free(s3);
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}

for (j = 0; s2[j] != '\0'; i++, j++)
{
s3[i] = s2[j];
}

return (s3);
}
