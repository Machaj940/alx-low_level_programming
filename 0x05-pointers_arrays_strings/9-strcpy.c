#include "holberton.h"

/**
 * _strcpy - copy a string from source string to destination string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
