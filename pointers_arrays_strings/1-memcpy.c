#include "main.h"

/**
 * _memcpy - entry point
 * @dest: parameter
 * @src: source
 * @n: number of elements
 * Return: returns destination if successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
