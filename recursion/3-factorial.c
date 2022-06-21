#include "main.h"
#include <stdio.h>



int factorial(int n)
{
	int m;

	if (n > 0)
	{
	m = n * factorial(n-1);
		return(m);
	}
	else if (n == 0)
	{
		return(1);
	}
	else (n < 0);
	{
		return(-1);
	}

}
