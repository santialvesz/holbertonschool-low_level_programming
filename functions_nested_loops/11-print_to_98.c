#include "main.h"
#include <stdio.h>
/** print_to_98 - pprints all n numbers to 98
 * @n: n is the int
 * Return: Returns all numbers
 */

void print_to_98(int n)
{

if (n <= 98)
{
for (n = n; <= 97; n++)	
{
printf("%d, ", n);
}
printf("%d\n", 98);
}
else
{
for (n = n; > 98; n--)
{
printf("%d, ", n);
}
printf("%d\n", 98);
}
}

