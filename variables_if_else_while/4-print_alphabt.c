#include <stdio.h>
int main(void)
{
char c;
for (c = 'a'; (c != 'q' ); c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

