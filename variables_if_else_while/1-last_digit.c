#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Random number to variable n
 * Return: return varible n
 */
int main(void)
{
int n;
int d;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, d);
}
elseif (n == 0)
{
printf("Last digit of %i is %i and is 0\n", n, d);
}
elseif (n < 6 && !0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);
}
return (0);
}
