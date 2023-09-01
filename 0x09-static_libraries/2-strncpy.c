#include<stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry point
 *
 * @dest : ' the source file '
 * @src : 'the second file'
 * @n : 'the variable'
 * Return: dest;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
