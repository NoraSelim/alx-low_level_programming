#include <stdio.h>
/**
 * _puts - Entry point
 *
 * @str: ' string of characters'
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(0 + *str);
		str++;
	}
	_putchar('\n');
}
