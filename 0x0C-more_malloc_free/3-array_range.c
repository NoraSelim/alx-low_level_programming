#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int x, l;
	int *y;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	y = malloc(sizeof(int) * l);
	if (y == NULL)
		return (NULL);
	for (x = 0; x < l; x++, min++)
	{
		y[x] = min;
	}
	return (y);
}
