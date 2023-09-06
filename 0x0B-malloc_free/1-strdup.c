#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if no memory.
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' ; i++)
		count++;

	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' ; i++)
		copy[i] = str[i];
	return (copy);
}
