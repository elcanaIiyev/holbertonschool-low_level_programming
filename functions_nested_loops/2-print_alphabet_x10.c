#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_10x - entry point
 */

void print_alphabet_x10(void)
{
	int a;
	char letter;

	for (a = 0; a < 10; a++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');

	}
}
