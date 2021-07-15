#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: an int
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
