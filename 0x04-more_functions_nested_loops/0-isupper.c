#include "holberton.h"
/**
 * _isupper - function to check for uppercase letters
 * @c: uppercase characters
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
