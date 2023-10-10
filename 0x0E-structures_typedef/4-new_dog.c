#include "dog.h"
#include <stdlib.h>

/**
 * len - calculate the length of a string
 * @src: the input string
 *
 * Return: the length of the string
 */
int len(char *sr)
{
int i;

for (i = 0; sr[i] != '\0'; i++)
;

return i;
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *cpy(char *tmp, char *src)
{
int len, i;

leng = len(src);

for (i = 0; i < leng; i++)
{
tmp[i] = src[i];
}
tmp[i] = '\0';

return (tmp);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;

len1 = len(name);
len2 = len(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
cpy(dog->name, name);
cpy(dog->owner, owner);
dog->age = age;

return (dog);
}
