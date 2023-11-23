#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first input
 * @m: second input
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int j;

	i = n ^ m;
	for (j = 0; i > 0; j--)
	{
		if ((i & 1) == 1)
			j++;
		i = i >> 1;
	}
	return (j);
}
