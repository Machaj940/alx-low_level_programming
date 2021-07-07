#include "holberton.h"
/**
 * _strncat - concatenates two strings with strncat equivalent
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be appended to dest string
 * Return: str3
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;
	while (n--)
	{
		while (!(*dest++ = *src++))
			return (dest);
	}
	dest[i] = '\0';
	return (dest);
}
