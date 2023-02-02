#include "main.h"
/**
 * print_alphabet_x10 - function to print the alphabet 10 times, in lowercase
 * Description: print the alphabet 10 times + a new line
 * print_alphabet: function to print the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
