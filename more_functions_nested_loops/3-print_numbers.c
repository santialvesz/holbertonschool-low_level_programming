#include "main.h"

/**
 * print_numbers - writes the character c to stdout
 * Return: On success 1.
 */
void print_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
_putchar(c);
}
_putchar(10);
}
