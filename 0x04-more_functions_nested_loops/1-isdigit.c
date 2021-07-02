#include "holberton.h"
/**
 * _isdigit - function to check for numbers 0-9
 * @c: digits 0-9
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
