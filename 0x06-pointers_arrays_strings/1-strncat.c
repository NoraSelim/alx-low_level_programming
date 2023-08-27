#include<stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - Entry point
 *
 * @dest : ' the source file '
 * @src : 'the second file'
 * @n : 'the variable'
 * Return: dest;
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[destlen + i] = src[i];
		dest[destlen + i] = '\0';
	}

	return (dest);
}
