#include "main.h"
#include <stdio.h>

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
	else
	{
		for (int line = 0; line < size ; line++)
		{
			for (int space = 0 ; space <= size ; space++)
			{
				if (space <= (size - line))
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
