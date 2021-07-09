#include "holberton.h"
/**
 * _strncpy - copy first n char of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be appende to dest
 * Return: temp
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
