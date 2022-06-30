#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Structure.
 * @name: name.
 * @age: age.
 * @owner: owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Structure.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_str(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
