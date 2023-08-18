#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal.
 * @n: How diagonal the line would be.
 * Return: No return.
 */
void print_diagonal(int n)
{
	int space, line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			if (line > 0)
			{
				for (space = 0 ; space < n; space++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
