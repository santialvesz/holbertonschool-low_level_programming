#include "main.h"
#include <ctype.h>
/**
 * * _isalpha - check if c is lowercase
 * @c: parameter
 * Return: Return 1 or 0 in each case
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}


	else
	{
		return (0);
	}
}
