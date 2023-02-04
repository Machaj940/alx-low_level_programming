#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: number of \ to be printed to make the diagonal
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				break;
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
