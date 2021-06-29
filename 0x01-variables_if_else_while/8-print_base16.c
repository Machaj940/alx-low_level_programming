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
	for (nu = '0'; nu <= '9';)
	{
		putchar(nu);
		nu++;
	}
	for (ch = 'a'; ch <= 'f';)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
