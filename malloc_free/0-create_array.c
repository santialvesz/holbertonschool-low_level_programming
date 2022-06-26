#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars.
 * @size: Element.
 * @c: Element.
 * Return: NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *string = malloc(size);
	unsigned int a;

	if (size == 0)
	{
	return (NULL);
	}
	if (string == NULL)
	{
	return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		string[a] = c;
	}
	string[a] = '\0';
	return (string);
}
