#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @i: int 
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;
		for (i = 0; i < _strlen(str); i++)
		{
			if (i % 2 == 0)
			{
				_putchar(i);
			}
			{
				_putchar('\n');
			}

}
}
