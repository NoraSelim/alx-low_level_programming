#include "variadic_functions.h"
#include <stdlib.h>

/**
 * t_char - print a character
 *@va:character
 *
 * Return: no return
 */
void t_char(va_list va)
{
	int x;

	x = va_arg(va, int);
	printf("%c", x);
}

/**
 * t_integer - print an integer
 *@va:number 1
 *
 * Return: no return
 */
void t_integer(va_list va)
{
	printf("%d", va_arg(va, int));
}

/**
 * t_float - print a float
 *@va:float number
 *
 * Return: no return
 */
void t_float(va_list va)
{
	double x;

	x = va_arg(va, double);
	printf("%f", x);
}
/**
 * t_string - print a string
 *@va: pointer to string
 *
 * Return: no return
 */
void t_string(va_list va)
{
	char *s = va_arg(va, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}


/**
* print_all - prints anything
*@format: format
*
* Return: no return
*/
void print_all(const char * const format, ...)
{
	int y, j, count;
	va_list valist;
	types difftypes[] = {
		{'c', t_char},
		{'i', t_integer},
		{'f', t_float},
		{'s', t_string},
		};
	char *s = "";

	y = 0;
	count = 0;
	va_start(valist, format);
	while (format != NULL && format[y])
	{
		j = 0;
		while (j < 4)
		{
			if (format[y] == difftypes[j].t)
			{
				printf("%s", s);
				difftypes[j].f(valist);
				s = ", ";
				count++;
				break;
			}
			j++;

		}
		y++;
	}
	printf("\n");
}
