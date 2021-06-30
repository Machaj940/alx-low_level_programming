#include "holberton.h"
/**
 * print_alphabet_x10 - function to print the alphabet 10 times, in lowercase
 * Description: print the alphabet 10 times + a new line
 * print_alphabet - function to print the alphabet in lowercase
 * Description: print alphabet followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

void print_alphabet(void)
{
	int (ch);

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
