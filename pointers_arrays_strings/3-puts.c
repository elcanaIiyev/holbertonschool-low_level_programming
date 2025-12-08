#include "main.h"

/**
 * _puts - entry point
 * @str: parameter
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
