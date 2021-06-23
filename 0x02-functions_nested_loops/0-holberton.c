#include"holberton.h"
/**
 * main - Prints Holberton
 * Description: Prints 'Holberton' using _putchar command
 * Return: Always 0 (success)
 */


int main(void)
{
	char c[] = "Holberton\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
