#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings
 * @...: next variable number
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, print (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *aaa;
	unsigned int index;

	va_start(str, n);

	for (index = 0; index < n; index++)
	{
		aaa = va_arg(str, char *);

		if (aaa == NULL)
			printf("(nil)");
		else
			printf("%s", aaa);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
