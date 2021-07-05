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
	char *begin_ptr, *end_ptr, ch;

	len = _strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < len - 1; i++)
		end_ptr++;
	for (i = 0; i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
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
