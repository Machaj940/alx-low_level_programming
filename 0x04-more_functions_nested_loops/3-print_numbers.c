#include "holberton.h"
/**
 * print_numbers - function to print 0-9 followed by a new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int (nu);

	for (nu = '0'; nu <= '9'; nu++)
	{
		_putchar(nu);
	}
	_putchar('\n');
}
