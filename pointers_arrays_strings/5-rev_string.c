#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: char
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, len;
	char e;
	len = strlen(s);

		for(i = 0;i < len/2; i++)
		{
			e = s[i];
			s[i] = s[len - i - 1];				
			s[len - i -1] = e;
		}
}
