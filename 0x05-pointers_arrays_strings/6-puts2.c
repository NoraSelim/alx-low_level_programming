#include "main.h"
/**
 * puts2 - Entry point
 *
 * @str : 'write the even numbers'
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
