#include <stdio.h>
/**
 * main - entry point of all c programs
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';
	int a;

	for ( a = 0; a < 10; a++)
		putchar(a + '0');
	while (letter <= 'f')
		putchar(letter++);
	putchar('\n');
	return (0);
}
