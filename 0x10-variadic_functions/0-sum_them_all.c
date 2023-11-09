#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number input
 * @...: next input
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list aaa;

	va_start(aaa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(aaa, int);

	va_end(aaa);

	return (sum);
}
