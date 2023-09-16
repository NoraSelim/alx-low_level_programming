#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: num of int
 * Return: ntg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		if (x != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(valist, unsigned int), separator);
		else
			printf("%d", va_arg(valist, unsigned int));
	}
	printf("\n");
	va_end(valist);
}
