#include "main.h"

/**
 * _strchr - entry point
 * @s: string
 * @c: parameter c
 * Return: returns element if successful
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
