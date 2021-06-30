#include "holberton.h"
/**
 * _islower - function to check for lowercase characters
 * Description: check for lowercase characters in a string
 * Return: Always 0(success)
 */
int _islower(int c)
{
	unsigned int g = 97;

	if (g <= 122) {
		return (1);
		g++;
	} else {
		return (0);
		g++;
	}
}
