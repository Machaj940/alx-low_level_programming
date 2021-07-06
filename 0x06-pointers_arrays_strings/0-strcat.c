#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	len = _strlen(dest);

	while (dest[len] != '\0')
	{
		++len;
	}
	for (j = 0; src[j] != '\0'; ++j, ++len)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	_putchar(dest);
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
