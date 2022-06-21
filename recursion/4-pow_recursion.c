#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to y
 *@x: int
 *@y: int
 *Return: return
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y > 0)
	{
	i = x * _pow_recursion(x, y - 1);
	return (i);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}


}
