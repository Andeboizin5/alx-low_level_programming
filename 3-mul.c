#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
