#include "main.h"
/**
 *comparar - function that returns the power of number
 *@n: original number
 *@a: counter to compare multiplication
 *
 *Return: square root
 */
int comparar(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);

	}
	return (comparar(n, a + 1));
}
/**
 *_sqrt_recursion - function that returns the power of number
 *@n: number
 *Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (comparar(n, 1));
}
