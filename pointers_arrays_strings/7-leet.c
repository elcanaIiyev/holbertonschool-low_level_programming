#include "main.h"

/**
 * leet - entry point
 * @s - string
 * Return: s if successful
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char arr[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'}

	while(s[i])
	{
		j = 0;

		while (j < 8)
		{	
			if (s[i] == arr[j] || (s[i] + 32) == arr[j])
			{
				s[i] = j + '0';
				j++;
			}
		}
		i++;
	}
	return (s);
}
