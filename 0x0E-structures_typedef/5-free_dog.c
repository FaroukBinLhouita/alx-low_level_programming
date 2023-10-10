#include "dog.h"
#include <stdlib>

/**
 * free_dog - free the dog
 * @d: the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
