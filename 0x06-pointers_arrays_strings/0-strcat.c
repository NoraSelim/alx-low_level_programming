#include "main.h"
/**
 * _strcat - Entry point
 *
 * @dest: ' the source file '
 * @src: 'the second file'
 *
 * Return: dest;
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destlength = 0;
	int srclength = 0;

	for (i = 0; dest[i] != '\0' ; i++)
		destlength++;
	for (i = 0; src[i] != '\0' ; i++)
		srclength++;
	for (i = 0; i <= srclength ; i++)
		dest[destlength + i] = src[i];
	return (dest);
}
