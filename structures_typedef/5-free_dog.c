#include "dog.h"

/**
 * free_dog - Func
 * @d: Elemente of pointer
 * Return: a
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
