#include "main.h"
/**
 * puts_half - Entry point
 *
 * @str : 'the program's about array of string'
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, j, n = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2  == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (n - 1) / 2;
		for (j = n ; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n')
}

