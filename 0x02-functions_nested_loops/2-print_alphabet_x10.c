#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int rows;
	int ch;
	for (rows = 0 ;rows <=10 ;rows++)
	{
		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
_putchar('\n');
return (0);
}

