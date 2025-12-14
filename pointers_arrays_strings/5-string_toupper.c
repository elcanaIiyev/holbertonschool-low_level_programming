#include "main.h"

/**
 * string_toupper - entry point
 * @str: string
 * Return: str if successful
 */

char *string_toupper(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		if (str[j] <= 'a' && str[j] >= 'z')
		{
			str[j] -= 32;
			j++;
		}
		else
			j++;
	}
	return (str);
}
