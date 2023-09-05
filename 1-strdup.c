#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *chr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	chr = malloc(sizeof(char) * (i + 1));

	if (chr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		chr[j] = str[j];

	return (chr);
}
