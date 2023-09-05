#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char
 *
 * @size: size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	while (size--)
	array[size] = c;
	return (array);
}
