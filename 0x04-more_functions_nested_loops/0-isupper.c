#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c : 'the program's about writinh alphabitics'
 *
 * Return: return 1 or 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
