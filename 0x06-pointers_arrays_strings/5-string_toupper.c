#include "holberton.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @* - string of chars
 * Return: s
 */
char *string_toupper(char *)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
