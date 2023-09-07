#include "main.h"
i#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: variable to allocate memory
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == 0)
		exit(98);
	return (n);
}
