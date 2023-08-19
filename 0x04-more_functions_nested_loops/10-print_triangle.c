#include "main.h"
/**
 * print_triangle - Print a triangle.
 * @size: How big the triangle would be.
 * Return: nothing.
 */
void print_triangle(int size)
{
	int space, line;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (int line = 1; line < size ; line++)
		{
			for (int space = size - line ; space > 0 ; space--)
			{
				if (space > line + 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		_putchar('\n');
		}
	}
}
