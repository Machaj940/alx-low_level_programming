#include "holberton.h"
/**
 * _puts - prints a string followed by a newline
 * @str: a string
 * Return: str
 */
int _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(str);
		_putchar('\n');
}
