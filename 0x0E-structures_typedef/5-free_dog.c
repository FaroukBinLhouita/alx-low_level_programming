#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog
 * @d: the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if
{
free(d->name);
free(d->owner);
free(d);
}
}
