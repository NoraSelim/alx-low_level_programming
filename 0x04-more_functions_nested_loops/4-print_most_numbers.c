#include <stdio.h>
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void);
{int digit;
for (digit = 0; digit < 10; digit++)
{putchar(digit + '0');

if (digit < 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
}
return (0);
}

