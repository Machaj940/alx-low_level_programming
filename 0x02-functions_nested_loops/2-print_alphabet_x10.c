#include "holberton.h"
/**
 * print_alphabet_x10 - function to print the alphabet 10 times, in lowercase
 * Description: print the alphabet 10 times + a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
