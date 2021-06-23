#include "holberton.h"
/**
 * main - print the alphabet
 * Description: print the alphabet in lower case
 * Return: always 0(success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
	return (0);
}
