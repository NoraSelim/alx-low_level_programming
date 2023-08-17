#include "main.h"
/**
 * print_most_numbers - print 0 to 9 apart from 2 and 4
 * apart from 2 and 4 
 * you can use putchar twice
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
			_putchar('a');
	}
	_putchar('\n');
}
