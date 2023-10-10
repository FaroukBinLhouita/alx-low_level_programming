#include "dog.h"
#include <stdlib.h>

/**
 * len - get lenght of the string
 * @src: the string
 *
 * Return: integer
 */
int len(*src)
{
int i;

for (i = 0; name[i] != '\0'; i++)
;

return (i)
}

/**
 * cpy - copy the string
 * @tmp: the copy version
 * @sru: the source version
 *
 * Return: a copy
 */
char *cpy(char *tmp, char *sru)
{
int j, leng = len(sru);

for (j = 0; j < leng; j++)
{
tmp[j] = sru[j];
}

tmp[j] = '\0';
return (tmp);
}

/**
 * new_dog - create a new dog
 * @name : the first member
 * @age: the sec member
 * @owner: the third member
 * 
 * Return: return a new data struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len1, len2;
dog_t *d;

len1 = len(name);
len2 = len(owner);

d->name = malloc(sizeof(char*) * (len1 + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(sizeof(char*) * (len2 + 1));
if (d->owner == NULL)
{
free(d);
return (NULL);
}

d->age = age;
cpy(d->name, name);
cpy(d->owner, owner);
return (d);
}
