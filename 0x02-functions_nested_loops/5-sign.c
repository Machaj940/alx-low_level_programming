#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: any integer greater than or less than or 0
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
