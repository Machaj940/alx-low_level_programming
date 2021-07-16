#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a char
 * Return: ptr to the first occurence of char c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
