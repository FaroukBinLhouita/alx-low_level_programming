#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog basic inofrmation
 * @name: first member
 * @age: seconed member
 * @owner: third member
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - a new version of dog info
 * 
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *cpy(char *tmp, char *src);
int len(char *sr);
void free_dog(dog_t *d);

#endif
