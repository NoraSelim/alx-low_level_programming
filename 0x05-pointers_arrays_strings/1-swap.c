#include "main.h"
/**
 * swap_int - Entry point
 *
 * @a: 'paramter 1'
 * @b: 'tparameter 2'
 *a
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
