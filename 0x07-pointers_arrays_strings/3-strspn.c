#include "holberton.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: a string to check
 * @accept: a string to check against
 * Return: no. of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				bresk;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
