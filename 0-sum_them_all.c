#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters
 * @...: A variable number of paramters
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
