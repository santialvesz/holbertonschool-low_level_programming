#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Random number to n
 * Return: return none
 */ 
int main(void)
{
int n;
int k;
srand(time(0));
n = rand() - RAND_MAX / 2;
k = n % 10;
if (n > 5)
	printf("Last digit of %i and is %i greater than 5\n", n, k);
if (n == 0)
	printf("Last digit of %i and is 0\n", n, k);
if ((n < 6)!=0)
	printf("Last digit of %i and is less than 6 and not 0\n", n, k);
return (0);
}
