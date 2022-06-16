#include "main.h"
#include <stdio.h>
#include <string.h>

/** 
 * _strcpy - copies string
 * @
 * Return: return dest
 */



char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < src[i]; i++)
	{
	       	dest[i] = src[i];

	}
	strcpy(dest, src);
		return (dest);

}
