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
for (digit = 0; digit < 100; digit++)
{putchar(digit + '0');
putchar(digit + '0');

if (digit < 99)

putchar(',');
putchar(' ');
}
putchar('\n')
return (0);
}
