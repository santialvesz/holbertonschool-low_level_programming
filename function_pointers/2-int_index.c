#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - funct
 * @array: array
 * @cmp: cmp
 * @size: size
 * Return: sth
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp && array)
	{
	for (a = 0; a < size; a++)
	{
		b = cmp(array[a]);
		if (b != 0)
			return (a);
	}
	}
	return (-1);
}
