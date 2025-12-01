#include <stdio.h>
/**
 * main - entry point of all c programs
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'z'

	while (letter >= 'a')
		putchar(letter--);

	putchar('\n');

	return (0);
}
