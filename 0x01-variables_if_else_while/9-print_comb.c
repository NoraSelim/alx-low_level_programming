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
for (digit = 48; digit < 58; digit++)
{putchar(digit);

if (digit < 57)

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

