#include "main.h"

/**
 * _strcmp - entry point
 * @s1: parameter s1
 * @s2: parameter s2
 * Return: returns result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, n;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			n = (s1[i] - '0') - (s2[i] - '0');
		else 
			n = (s1[i] - '0') - (s2[i] - '0');
			return(n);
		i++;
	}
	return (n);
}
