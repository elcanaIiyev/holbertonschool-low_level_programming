#include "main.h"

/**
 * _strlen - entry point
 * @s: parameter s
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
