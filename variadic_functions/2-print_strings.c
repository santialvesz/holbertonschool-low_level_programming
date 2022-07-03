#include "variadic_functions.h"
/**
 * print_strings - Functions.
 * @separator: Pointer element.
 * @n: Element.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c = 0;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
	c = va_arg(string, char *);
	if (c != NULL)
	{
	if (i == n - 1 || separator == NULL)
	{
	printf("%s", c);
	}
	else
	{
	printf("%s%s", c, separator);
	}
	}
	else
	{
	printf("(nil)");
	}
	}
	printf("\n");
	va_end(string);
}
