#include "holberton.h"
/**
 * _isalpha - function to check for alphabet characters
 * Description: check for alphabet characters in a string
 * @c: alphabet character
 * Return: Always 0(success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
