#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: count of remaining arguments, which are added up and the result returned
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);         /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);                  /* Clean up. */
	return (sum);
}
