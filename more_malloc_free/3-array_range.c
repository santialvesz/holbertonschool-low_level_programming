include "main.h"
/**
 * *array_range - Function that creates an array of integers.
 * @min: Element.
 * @max: Element.
 * Return: min + max.
 */
int *array_range(int min, int max)
{
	int *a, b;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (max - min + 1); b++)
	{
		a[b] = b + min;
	}
	return (a);
}
