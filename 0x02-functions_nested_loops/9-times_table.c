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

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if ((x * y) >= 10)
			{
				_putchar('0' + ((x * y) % 10));
				_putchar('0' + ((x * y) / 10));
			}
			else
			{
				_putchar('0' + (x * y));
			}

			if (x < 9)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
