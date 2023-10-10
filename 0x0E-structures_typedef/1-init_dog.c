#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - inislize a type of data
 * @d: the data type for a dog
 * @name : the first member
 * @age: the sec member
 * @owner: the third member
 * 
 * Rerutn: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog)); 
}

d->name = name;
d->owner = owner;
d->age = age;
}
