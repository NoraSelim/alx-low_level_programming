#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{char ch, e, q;
char e = 'e';
char q = 'q';
for (ch = 'a' ; ch <= 'z'; ch++)
{
if (ch != e && ch != q)
putchar(ch);
}
putchar('\n');
return (0);
}
