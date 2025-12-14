#include "main.h"

/**
 * _strncat - entry point
 *
 * @dest: parameter dest
 *
 * @src: parameter src
 *
 * @n: parameter n
 *
 * Return: dest if successful
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, k = 0;

	if (*(dest) == '\0' || *(src) == '\0')
		return (dest);
	while (dest[i] != '\0')
		i++;
	j = i;
	while (j < i + n)
	{
		dest[i] = src[k];
		j++;
		k++;
	}
	return (dest);
}
