#include "holberton.h"
/**
 * main - Prints Holberton
 * Description: Prints 'Holberton' using _putchar command
 * Return: Always 0 (success)
 */


int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
