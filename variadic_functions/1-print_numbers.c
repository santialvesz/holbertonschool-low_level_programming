#include "variadic_functions.h"
/**
 * print_numbers - Function.
 * @separator: Pointer element.
 * @n: Element.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
	if (i == n - 1 || separator == NULL)
	{
	printf("%d", va_arg(num, int));
	}
	else
	{
	printf("%d%s", va_arg(num, int), separator);
	}
	}
	printf("\n");
	va_end(num);
}
