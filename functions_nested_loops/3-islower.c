#include "main.h"
#include <ctype.h>
/** _islower - check if c is lowercase
 * Return: Return 1 or 0 in each case
 */
int _islower(int c);
{
int c;
if(c >= 'a' and c <= 'z') 
{
return(1);
}
else
{
return(0);
}
}