#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * Description: print "0123456789abcdef"
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int (ch);
	int (nu);
	for (nu = '0'; nu <= '9'; nu++)
	{
		putchar(nu);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
