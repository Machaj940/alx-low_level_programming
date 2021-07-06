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
