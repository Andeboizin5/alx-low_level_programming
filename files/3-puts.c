#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @s: input
 * Return: Always 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
