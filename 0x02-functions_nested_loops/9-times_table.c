#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: 'time table'
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int y, x;

	for (y = 0; y < x; y++)
	{
		for (x = 0; x < 9; x++)
		{
			_Putchar(x * y);
		}
		 if (y < 9)
                {
                        _putchar(' ');
                        _putchar(',');
                }
	_putchar('\n');
	} 
}
