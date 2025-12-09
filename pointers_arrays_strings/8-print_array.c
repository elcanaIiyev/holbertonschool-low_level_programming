#include "main.h"

/**
 * print_array - entry point
 * @a: parameter a
 * @n: parameter n
 */

void print_array(int *a, int n)
{

	int i = 0;
	
	while (a[i] < a[n])
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		i++;
	}
	printf("%d", a[n-1]);
	_putchar('\n');
	
}
