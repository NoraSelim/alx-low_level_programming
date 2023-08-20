#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 *
 * @size: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int lines, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines < size ; lines++)
		{
			for (hash = 1; hash < size ; hash++)
			{
				if (lines = size)
				{
					_putchar('#');
				}
			}
		_putchar('\n')
		}
	}
}
