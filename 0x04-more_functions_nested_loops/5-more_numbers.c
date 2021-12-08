#include "holberton.h"
/**
 * more_numbers - function to print 0-14 followed by a new line
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int (nu);

		for (nu = '0'; nu <= '14'; nu++)
		{
			_putchar(nu);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
