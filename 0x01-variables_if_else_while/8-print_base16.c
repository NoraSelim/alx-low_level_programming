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
{putchar(digit);
}
for (digit = 97; digit < 102; digit++)
{putchar(digit);
}
putchar('\n');

return (0);
}
