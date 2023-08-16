#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n : 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{ int lastd;
if (n > 0)
{
lastd = n % 10;
putchar(lastd + '0');
}
else
{
lastd = (-1) * n % 10;
putchar(lastd + '0');
}
return (lastd);
}

