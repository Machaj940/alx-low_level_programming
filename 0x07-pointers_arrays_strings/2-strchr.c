#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a char
 * Return: ptr to the first occurence of char c
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s != c && *s != NULL)
		ptr = ++s;
	return (ptr);
}
