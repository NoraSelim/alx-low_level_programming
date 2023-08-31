/**
 *_sqrt_recursion - prints the natural square root of a number
 *
 *@n: number to get evaluated
 *
 *Return: the natural square root of @n, -1 if no natural root found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sq(2, n));
}
