#include "main.h"
/**
 * print_sign  - Entry point
 *
 * @n: 'the program's about writinh alphabitics'
 *
 * Return: Always 1 if lowercase otherwise return 0  (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
		else if (n == 0)
		{
		_putchar('0');
		return (0);
		}
		else1 
		{
		_putchar('-');
		return (-1);
		}
}
