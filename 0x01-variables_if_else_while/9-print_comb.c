#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int digit;
for (digit = 48; digit < 57; digit++)

if (digit < 57)
{
putchar(digit);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

