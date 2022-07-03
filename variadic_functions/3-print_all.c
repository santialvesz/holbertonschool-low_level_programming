#include "variadic_functions.h"
/**
 * print_all - Function.
 * @format: Element.
 */
void print_all(const char * const format, ...)
{
	va_list ran;
	char c = 0;
	int i = 0;
	float f = 0.0f;
	char *s = 0;

	va_start(ran, format);
	while (c < format && i < format && f < format)
	s = va_arg(ran, char *);
	if (s == NULL)
	{
	printf("%s", s);
	}
	if (s == NULL)
	{
	printf("(nil)");
	}
	printf("\n");
	va_end(ran);
}
