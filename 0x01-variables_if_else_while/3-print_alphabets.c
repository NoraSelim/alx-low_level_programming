#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	putchar(ch);

	char UpCase;

	for (UpCase = 'A'; UpCase <= 'Z'; UpCase++)
	putchar(UpCase);
	putchar("\n");
	return (0);
}
