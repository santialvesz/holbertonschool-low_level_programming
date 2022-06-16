#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{

	int i, n;

	for (n = 0; dest[n] != 0; n++)
	{
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
			n++;
	}
	
	return (dest);
}
