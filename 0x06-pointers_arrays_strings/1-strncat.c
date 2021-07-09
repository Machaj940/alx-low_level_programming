#include "holberton.h"
/**
 * _strncat - concatenates two strings with strncat equivalent
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be appended to dest string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
