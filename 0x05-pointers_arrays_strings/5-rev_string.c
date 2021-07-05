#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: a string
 * _strlen: return the length of a string
 * swap_int: swap the values of 2 integers
 * Return: str
 */
void rev_string(char *s)
{
	int i;
	int len;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		swap_int(s[i], s[len - i - 1]);
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

/**
 * swap_int - swaps the value of 2 integers
 * @a: an int
 * @b: an int
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
