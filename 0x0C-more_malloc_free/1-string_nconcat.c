#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;

	if (n < l)
		str = malloc(sizeof(char) * (k + n + 1));
	else
		str = malloc(sizeof(char) * (k + l + 1));

	if (str == NULL)
		return (NULL);

	while (i < k)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < l && i < (k + n))
		str[i++] = s2[j++];

	while (n >= l && i < (k + l))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
