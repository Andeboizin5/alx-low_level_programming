#include "fuction_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
