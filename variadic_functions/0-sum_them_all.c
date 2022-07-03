#include "variadic_functions.h"
/**
 * sum_them_all - Function.
 * @n: Element.
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, p = 0;
	int a;
	va_list sum;

	if (n)
	{
	va_start(sum, n);

		for (i = 0; i < n; i++)
		{
		a = va_arg(sum, int);
		p += a;
		}
		va_end(sum);
		return (p);
	}
	if (!n)
	{
	return (0);
	}
	return (0);
}
