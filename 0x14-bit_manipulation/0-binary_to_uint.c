#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		j = 2 * j + (b[i] - '0')
	}
	return (j);
}
