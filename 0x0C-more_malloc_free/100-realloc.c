#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: old memory allocated
 * @new_size: new memory allocated
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *n;
	char *o;

	old = ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == 0)
	{
		n = malloc(new_size * sizeof(char));
		return (n);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	n = malloc(new_size * sizeof(char));
	if (n == 0)
		return (NULL);
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			n[a] = o[a];
		return (n);
	}
	free(ptr);
	return (n);
}
