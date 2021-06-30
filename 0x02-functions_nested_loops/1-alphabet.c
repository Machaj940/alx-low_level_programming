#include "holberton.h"
/**
 * print_alphabet - function that prints the alphabet
 * Description: print the alphabet in lower case
 * Return: always 0(success)
 */

void print_alphabet(void)
{
	int (ch);

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
