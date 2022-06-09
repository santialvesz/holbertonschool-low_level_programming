#include "main.h"
/**
 * print_last_digit - print the last digit of a num
 * @n: char
 * Return: return **/
int print_last_digit(char n)
{

char d;

d = n % 10;
_putchar('0' + d);
return (d);
_putchar ('\n');
}
