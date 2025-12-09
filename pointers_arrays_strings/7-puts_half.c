#include "main.h"

/**
 * puts_half - entry point
 * @str: parameter
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	j = i / 2;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n')
}
