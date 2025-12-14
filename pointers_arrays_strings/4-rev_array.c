#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: parameter
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	while (a[i] != a[n-1])
	{
		temp = a[i];
		a[i] = a[n-1];
		a[n-1] = temp;

		i++;
		n--;
	}
}
