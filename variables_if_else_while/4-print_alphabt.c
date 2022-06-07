#include <stdio.h>
/**
 * main - Removing q e for the alpha.
 * Return: return none
 */
int main(void)
{
char c;
for (c = 'a';  c <= 'z'; c++)
if (c != 'q' && c != 'e')
{	
putchar(c);
}
putchar('\n');
return (0);
}
