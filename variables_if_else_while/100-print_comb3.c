#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * main - alphabet
 * * Return: alphabet
 */
int main(void)
{
	int c;
	int d = 49;
	int e;
	for (c = 48 ; c <= 56 ; c++)

	{
		for (e = d ; e <= 57 ;)
		{
			putchar (c);
			putchar (e);
			if (c < 56)
			{
				putchar (44);
				putchar (32);
			}
			e++;
		}
		d++;
	}
	putchar (10);
	return (0);
}
