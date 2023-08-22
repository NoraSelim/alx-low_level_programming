#include "main.h"
/**
 * print_rev - Entry point
 *
 * @s: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int halfcount, length;
	char rev;

	for (length = 0; length != '\0'; length++)
	
	for (halfcount=0; halfcount < length / 2; halfcount++)
	{
		rev = s[i];
		s[i]= s[length - 1 - halfcount];
		s[length - 1 - halfcount] = rev;
	}
}s
