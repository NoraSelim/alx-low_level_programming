#include <stdio.h>
/**
 * _strlen - Entry point
 *
 * @s: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}
