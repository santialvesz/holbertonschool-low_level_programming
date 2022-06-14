#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse function
 * @i: char
 * Return: 0
 */


void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
	i++;
	}
	while (*(s + i -1) != 0)
	{
	i--;
	_putchar(*(s + i -1));
	}
	_putchar('\n');
}
