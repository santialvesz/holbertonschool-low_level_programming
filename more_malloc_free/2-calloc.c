#include "main.h"
/**
 * *_calloc - Function taht allocates memory for an array, using malloc.
 * @nmemb: Element.
 * @size: Element.
 * Return: Void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == 0)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); b++)
	{
		a[b] = 0;
	}
	return ((void *)a);
}
