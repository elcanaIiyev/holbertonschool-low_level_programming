#include <stdio.h>
int main(void)
/**
 * main - entry point of all c programs
 *
 * Return: return 0 if the program is successful
 */
{
	char letter = 'a', bletter = 'A';

	while (letter <= 'z')
		putchar(letter++);
	while (bletter <= 'Z')
		putchar(bletter++);
	putchar('\n');
	return (0);
}
