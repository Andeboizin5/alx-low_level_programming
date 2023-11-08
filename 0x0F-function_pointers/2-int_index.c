#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array input
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

