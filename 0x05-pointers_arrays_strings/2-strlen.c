include "holberton.h"
/**
 * _strlen - returns the length of a string
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
