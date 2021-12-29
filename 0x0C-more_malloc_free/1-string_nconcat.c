#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate n bytes of a string to another
 * @s1: beginning string
 * @s2: n bytes of s2 will be concatenated to n1
 * @n: the bytes to be added to s1
 * Return: pointer to a new space in memory containing string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len, len2;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = _strlen(s1);
	new_str = malloc((len + n + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	len2 = _strlen(s2);
	if (n >= len2)
		n = len;
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}

#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: c
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
