#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: str3
 */
char *_strcat(char *dest, char *src)
{
	char *str3[];
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}
	while (src[j] != '\0')
	{
		str3[j] = src[j];
		i++;
		j++;
	}
	str3[j] = '\0';
	_putchar(str3);
}
