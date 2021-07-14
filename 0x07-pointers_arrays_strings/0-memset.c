#include "holberton.h"
/**
 * _memset - fills memory with a constant bite
 * @s: a destination string
 * @b: a char to be filled
 * @n: number of bytes to be filled
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
