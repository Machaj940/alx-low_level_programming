#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: a string
 * _strlen: return the length of a string
 * Return: str
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - return the length of a string
 * @c: a string
 * Return: c
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
