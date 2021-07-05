#include "holberton.h"
/**
 * puts2 - prints every other char in a string, starting with the 1st char
 * @str: a string
 * _strlen: return the length of a string
 * Return: str
 */
void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - return the length of a string
 * @s: a string
 * Return: c
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
