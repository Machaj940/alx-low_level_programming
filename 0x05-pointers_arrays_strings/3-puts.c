#include "holberton.h"
/**
 * _puts - prints a string followed by a newline
 * @str: a string
 * @i: size of array
 * Return: str
 */
void _puts(char *str)
{
	char *str[];
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
