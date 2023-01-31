#include <stdio.h>
/**
 * main - print the single digit numbers of base 10 starting from 0
 * Description: print "0123456789"
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int (ch);
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
