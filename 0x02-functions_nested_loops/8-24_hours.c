#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: 'the program's about time'
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a, b;
	for (b = 0; b <= 23; b++)
	{
		for (a = 0; a < 59; a++)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}

