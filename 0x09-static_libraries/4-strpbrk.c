#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: first input
 * @accept: second input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}
