#include <stdio.h>
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c != 'q'; c != 'e'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

