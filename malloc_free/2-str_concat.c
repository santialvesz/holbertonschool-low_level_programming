#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Function that concatenates two strings.
 * @s1: Pointer element.
 * @s2: Pointer element.
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c1 = 0, c2 = 0;
	char *c3;

	while (s1 && s1[c1])
	{
		c1++;
	}
	while (s2 && s2[c2])
	{
		c2++;
	}
	c3 = malloc(sizeof(char) * (c1 + c2 + 1));
	if (c3 == NULL)
		return (NULL);
	a = 0;
	b = 0;
	if (s1)
	{
	while (a < c1)
	{
		c3[a] = s1[a];
		a++;
	}
	}
	if (s2)
	{
	while (a < (c1 + c2))
	{
		c3[a] = s2[b];
		a++;
		b++;
	}
	}
	c3[a] = '\0';
	return (c3);
}
