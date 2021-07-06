#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: max number of chars to be appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	while (dest != '\0')
	{
		dest++;
	}
	while (n--)
	{
		while (!(dest++ = *src++))
			return (dest);
	}
	dest = '\0';
	return (dest);
}
