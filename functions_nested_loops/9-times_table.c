#include "main.h"
/**
 * times_table - prints the 9 time table
 *
 * Return: the 9 times table
 */
void times_table(void)
{
int x, y;
for (x = 0 ; x < 10 ; x++)
{
for (y = 0 ; y < 10 ; y++)

if (y == 0)
{
_putchar(x * y + '0');
}
else if (x * y >= 10)
{
_putchar(' ');
_putchar(x * y / 10 + '0');
_putchar(x * y % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(x * y + '0');
}

if (y == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
}
}
}
}
