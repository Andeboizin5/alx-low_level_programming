#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	i = j;
	while (s2[j] != '\0')
		j++;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	i = j;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';
	return (s);
}
