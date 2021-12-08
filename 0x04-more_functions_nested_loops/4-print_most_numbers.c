#include "main.h"
/**
 * print_most_numbers - function to print 0-9 excluding 2 & 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
