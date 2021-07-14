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
	unsigned char *memory = s, value = b;

	for (i = 0; i < n; i++)
		momory[i] = value;
	return (memory);
}
