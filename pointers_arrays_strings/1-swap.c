#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two nums
 * @b: int 2
 * @a: int 1
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
