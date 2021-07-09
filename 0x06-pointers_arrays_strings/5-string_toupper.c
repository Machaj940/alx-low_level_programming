#include "holberton.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: string of chars
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
	s[i] = '\0';
	return (s);
}
