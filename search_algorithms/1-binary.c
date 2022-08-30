#include "search_algos.h"
/**
 * binary_search - Function.
 * @array: array.
 * @size: size.
 * @value: value.
 * Return: int.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (value < array[i])
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
