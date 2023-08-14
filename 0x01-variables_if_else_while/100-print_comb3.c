#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's about writinh alphabitics'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int a = '0';
int b = '0';
while (a <= '9')
{
	while (b <= '9')
	{
		if (!(b == a || a > b))
	{
		putchar(a);
		putchar(b);
	}
	if (a == '8' && b == '9')
	{
		putchar('\n');
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	b++;
	}
b = '0';
a++;
}
return (0);
}
