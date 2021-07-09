#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @s: string of chars
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == ' ')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
	}
	return (s);
}
