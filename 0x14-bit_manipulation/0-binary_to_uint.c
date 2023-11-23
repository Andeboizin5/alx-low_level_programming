#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j;

	if (b != NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		i <<= 1;
		if (b[j] == '1')
			i += 1;
	}
	return (i);
}
