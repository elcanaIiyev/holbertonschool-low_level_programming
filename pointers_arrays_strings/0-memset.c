#include "main.h"

/**
 * _memset - entry point
 * @s: parameter s
 * @b: parameter b
 * @n: size of array
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
