#input <stdio.h>
int main(void)
{
int intType;
float floatType;
long int longintType;
long long int longlongintType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a int: %zu byte(s)\n", sizeof(intType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
printf("Size of a longint: %zu byte(s)\n", sizeof(longintType));
printf("Size of a longlongint: %zu byte(s)\n", sizeof(longlongintType));

return (0);
}
