#include "holberton.h"
/**
 * print_most_numbers - function to print 0-9 excluding 2 & 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int nu = 0;

	while (nu <= '9')
	{
		if (nu == 2)
			continue;
		if (nu == 4)
			continue;
		_putchar(nu);
		nu++;
	}
	_putchar('\n');
}
