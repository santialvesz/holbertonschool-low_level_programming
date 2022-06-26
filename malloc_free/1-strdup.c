#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Function that creates an array of chars.
 * @str: Pointer element.
 * Return: NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *c;
	int a, b, d = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	for (b = 0; str[b]; b++)
	d = d + 1;
	c = malloc(sizeof(char) * d + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= d - 1; a++)
	{
		c[a] = str[a];
	}
	return (c);
}
