#include "holberton.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: a string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_puts_recursion(s + 1);
	_putchar('\n');
}
