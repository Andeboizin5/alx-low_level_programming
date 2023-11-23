#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: n input
 * @m: m input
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int j;
	unsigned long int exclusive;

	exclusive = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		j = exclusive >> i;
		if (j & 1)
			count++;
	}
	return (count);
}
