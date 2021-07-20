#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenate s string
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to newly allocated space in memory or null if error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
		;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	s = malloc(sizeof(char) * k);
	if (s == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < i; l++)
	{
		s[l] = s1[l];
	}
	for (l = 0; l < j; l++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
