#include <stdio.h>
/**
 *  print_line - Entry point
 *
 * @n: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int n = 3;
	int line;

	if ( n <= 0 )
	{
		putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			putchar("_");
			putchar('\n');
		}
	}

}
~   
