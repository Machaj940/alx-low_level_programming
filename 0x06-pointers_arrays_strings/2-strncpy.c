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
	if ((dest == NULL) && (src == NULL))
		return (NULL);

	char *dest = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
