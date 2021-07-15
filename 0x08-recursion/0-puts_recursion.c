#include "holberton.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: a string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}