#include "main.h"

/**
 * _strcpy - entry point
 * Return: dest if successful
 * @dest: parameter
 * @src: parameter
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;
	
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
	
}
