#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string and adds a newline using recursion
 *
 * @s : pointer that has the address of the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	s++;

	_puts_recursion(s);
}
