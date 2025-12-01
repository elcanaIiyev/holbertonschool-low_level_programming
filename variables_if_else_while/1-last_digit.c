#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the entry point of every c program
 *
 * Return: returns 0 if the program runs succesfully
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 0)
		printf(" and is greater than 5\n");
	else if (last_digit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}
