#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one being passed
 * @s2: string two being passed
 * @n: size
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1, len2, len12, counts2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0' ; len1++)
		;
	for (len2 = 0; s2[len2] != '\0' ; len2++)
		;
	if (n > len2)
		conc = malloc((len1 + len2 + 1) * sizeof(char));
	else
		conc = malloc((len1 + n + 1) * sizeof(char));

	if (conc == 0)
		return (NULL);

	for (len12 = 0; len12 < len1 ; len12++)
		conc[len12] = s1[len12];
	for (counts2 = 0; counts2 < n && counts2 < len2 ; counts2++, len12++)
		conc[len12] = s2[counts2];
	conc[len12] = '\0';
	return (conc);
}
