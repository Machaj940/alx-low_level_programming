#include "holberton.h"

/**
 * _strcpy - copy a string from source string to destination string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
