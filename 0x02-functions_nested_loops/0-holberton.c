#include"holberton.h"
/**
 * main - Prints Holberton
 * Description: Prints 'Holberton' using _putchar command
 * Return: Always 0 (success)
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
