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
	int i, len;
	len = strlen(str);

		for (i = 0; i < len; i++)
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
			{
				_putchar('\n');
			}

}
}
