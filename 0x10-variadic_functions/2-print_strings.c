#include "variadic_functions.h"

/**
 * print_strings -print strings
 *@separator: separator
 *@n:number of arguments
 * Return: the sum of the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *p;
	char array[] = "(nil)";

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
			p = array;
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s%s", p, separator);
		} else
		{
			printf("%s", p);
		}
	}
	printf("\n");
	va_end(valist);
}
