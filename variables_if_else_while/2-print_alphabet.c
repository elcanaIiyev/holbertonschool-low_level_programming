#include <stdio.h>

/** 
 * main - entry point of all programs
 */
int main(void)
{
	char letter  = 'a';

	while (letter <= 'z')
		putchar(letter++);
	putchar('\n');

	return (0);
}
