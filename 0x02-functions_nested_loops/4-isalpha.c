#include "holberton.h"
/**
 * _islower - function to check for lowercase characters
 * Description: check for lowercase characters in a string
 * @c: lowercase characters
 * Return: Always 0(success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
