#include "main.h"
#include <stdio.h>

/**
 * print_array - array that prints in
 * @n: int
 * @a: int
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		if (!(i == n - 1))

		{
			printf("%d, ", a[i]);

		}
		else if (i == n - 1)

		{
			printf("%d", a[i]);

		}
	}
		putchar('\n');
}

