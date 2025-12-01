#include <stdio.h>
/**
 * main - entry point of all c programs
 *
 * Return: returns 0 if the program is successful
 */
int main(void)
{
	char letter = 'a', bletter = 'A';

	while (letter <= 'z')
		putchar(letter++);
	while (bletter <= 'Z')
		putchar(bletter++);
	putchar('\n');
	return (0);
}
