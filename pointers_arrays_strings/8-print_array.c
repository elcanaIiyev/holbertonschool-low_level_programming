#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: parameter a
 * @n: parameter n
 */

void print_array(int *a, int n)
{

	int i = 0;
	
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	while (i < n)
	{
		if (i != n - 1)
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d", a[n-1]);
	putchar('\n');
	
}
