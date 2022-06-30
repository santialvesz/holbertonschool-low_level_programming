#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  * _strdup - check the code
  * @str: str
  * Return: pointer to d.
  */
char *_strdup(char *str)
{
	unsigned int pos, len;
	char *dup;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != 0;)
		len++;

	dup = (char *)malloc((sizeof(char) * len + 1));

	if (dup == NULL)
		return (NULL);

	for (pos = 0; pos <= len; pos++)
	{
		dup[pos] = str[pos];
	}

	return (dup);
}
/**
 * new_dog - init
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (!d)
	return (NULL);
d->name = _strdup(name);
if (!d->name)
{
free(d);
return (NULL);
}
d->owner = _strdup(owner);
if (!d->owner)
{
	free(d->name);
	free(d);
	return (NULL);
}
d->age = age;
return (d);
}
