#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: 'the program's about nested loops'
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int lines = 0;

	while (lines <= 10)
	{
		int n = 0;

		while (n <= 14)
		{
			n++;
			_putchar (n + '0');
		}
		lines++;
		_putchar ('\n');
	}
	_putchar('\n');
}
~                                                                                                                                                    
~                                                                                                                                                    
~          
