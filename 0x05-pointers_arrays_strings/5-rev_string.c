#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: a string
 * _strlen: return the length of a string
 * Return: str
 */
void rev_string(char *s)
{
	int i;
	int len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		return (s[i]);
	}
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
