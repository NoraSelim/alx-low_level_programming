#include "main.h"
/**
 * _islower  - Entry point
 *
 * Description: 'the program's about writinh alphabitics'
 *
 * Return: Always 1 if lowercase otherwise return 0  (Success)
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
return (0);
}

