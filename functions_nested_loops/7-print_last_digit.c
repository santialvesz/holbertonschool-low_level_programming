#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the last digit of a num
 * @n: char
 * Return: return
 */
int print_last_digit(int n)
{

int d;

d = n % 10;
_putchar((abs(d)) + '0');
return (abs(d));
_putchar ('\n');
}
