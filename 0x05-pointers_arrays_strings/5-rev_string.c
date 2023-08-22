#include "main.h"
/**
 * rev_string - Entry point
 *
 * @s: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int halfcount, length;
	char rev;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (halfcount = 0; halfcount < length / 2; halfcount++)
	{
		rev = s[halfcount];
		s[halfcount] = s[length - 1 - halfcount];
		s[length - 1 - halfcount] = rev;
	}
}
