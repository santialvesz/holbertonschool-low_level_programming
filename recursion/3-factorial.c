#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a num
 * @n: int
 * Return: 0,1,-1 in specific case
 */



int factorial(int n)
{
	int m;

	if (n > 0)
	{
	m = n * factorial(n - 1);
		return (m);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
