#include "holberton.h"

/**
 * _strcpy - copy a string from source string to destination string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	*dest = '\0';
	return (dest);
}
