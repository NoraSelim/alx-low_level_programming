#include <stdio.h>
/**
 * _isdigit - Entry point
 *
 * @c : 'the program's about writing function'
 *
 * Return: return 1 or 0 (Success)
 */
int _isdigit(int c)
{
	if (c > 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
