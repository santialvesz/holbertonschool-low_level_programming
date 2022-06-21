#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of the string
 * @s: char
 * Return: i
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	
		
		if (s[i] != 0)
		{
			i++;
			i = 1 + _strlen_recursion(&s[i] + 1);
		}
		return (i);
}
