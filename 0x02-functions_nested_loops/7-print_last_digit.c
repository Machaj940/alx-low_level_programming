#include "holberton.h"
/**
 * print_last_digit - prints the last digit of any integer
 * @j: any number
 *
 * Return: Always 0
 */
int print_last_digit(int j)
{
	if (j >= 0)
	{
		return (j % 10);
	}
	else
	{
		return (10 - (j % 10));
	}
}
