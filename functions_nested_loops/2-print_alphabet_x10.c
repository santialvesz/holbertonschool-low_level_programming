#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int t;

for (t = '0'; t <= '9'; t++)
{
for (c = 'a';c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
