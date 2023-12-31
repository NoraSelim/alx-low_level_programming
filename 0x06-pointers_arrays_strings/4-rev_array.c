#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int x, j, tmp;

	j = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[j];
		a[j--] = tmp;
	}
}
