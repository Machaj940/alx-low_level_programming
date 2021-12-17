#include "main.h"
/**
 * _strncpy - copy first n char of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be appende to dest
 * Return: temp
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	for (k = j; k != i; k++)
	{
		dest[k] = dest[k];
	}
	return (dest);
}
