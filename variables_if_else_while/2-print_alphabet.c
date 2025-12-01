#include <stdio.h>
/**
 * main - entry point of all programs
 *
 * Return: returns 0 if the program runs succesfully
 */
int main(void)
{
	char letter  = 'a';

	while (letter <= 'z')
		putchar(letter++);
	putchar('\n');

	return (0);
}
