#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_10x - entry point
 * Return: 0 if successful
 */

void print_alphabet_10x(void)
{
	int a;
	char letter;
	for (a = 0;a < 10; a++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');

	}
}
