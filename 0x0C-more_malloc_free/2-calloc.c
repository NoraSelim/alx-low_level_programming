#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Main Entry
 * @nmemb: input
 * @size: input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = calloc(nmemb, size);
	if (n == NULL)
		return (NULL);
	else
		return (n);
}
