#include <stdio.h>
/**
 * swap_int - Entry point
 *
 * @a: 'paramter1'
 * @b: 'tparameter 2'
 *a
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;
	int temp = *a;
	*a = *b;
	*b = temp;
}
