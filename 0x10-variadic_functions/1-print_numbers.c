#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: all args separated by separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, m;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);         /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		m = va_arg(ap, unsigned int);
		printf("%d", m);
		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(ap);        /* Clean up. */
	putchar('\n');
}
