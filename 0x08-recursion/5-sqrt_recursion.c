#include "holberton.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: an int
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int c;

	if (n * n == c)
	{
		return (n);
	}
	if (n * n > c)
	{
		return (-1);
	}
	return (_sqrt_recursion(n + 1, c));
}
