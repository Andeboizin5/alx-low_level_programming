#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: next input
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *aaa;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		aaa = va_arg(str, char *);

		if (aaa == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", aaa);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
