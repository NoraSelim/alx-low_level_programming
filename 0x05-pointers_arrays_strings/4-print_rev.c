#include "main.h"
/**
 * print_rev - Entry point
 *
 * @s: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n')

}
