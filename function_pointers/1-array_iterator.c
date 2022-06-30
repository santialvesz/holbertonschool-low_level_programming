#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action && array)
	{
	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
	}
}
