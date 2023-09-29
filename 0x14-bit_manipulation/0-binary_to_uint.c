#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * b is NULL.
 *
 * Return: the converted number or 0 if there is one or more chars in the,
 * string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int l, usigned_int = 0, dec_val = 1;
	/* if we have no string return 0 */
	if (!b)
		return (0);

	/* loop from end of string (-1 to ignore '\0' ) to start of string */
	for (l = _strlen(b) - 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
		if (b[l] == '1')
		{
			usigned_int += dec_val;
		}
		dec_val *= 2;
	}
	return (usigned_int);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 *
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
	int lens = 0;

	while (s[lens] != '\0')
		lens++;
	return (lens);
}
