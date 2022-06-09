#include "main.h"
/**
 * print_sign - prints the sign of a numbe
 * @n: numberr
 * Return: return x number in each case
 */

int print_sign(int n)
{

if (n > '0')
{
_putchar('+');
return (1);
_putchar('\n');
}
else if (n == 0)
{
_putchar('0');
return (0);
_putchar('\n');
}
else
{
_putchar('-');
return (-1);
_putchar('\n');
}
}
