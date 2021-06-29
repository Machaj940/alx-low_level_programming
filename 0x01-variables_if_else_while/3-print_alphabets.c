#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Description: print 'abcdefghijklmnopqrstuvwxyz"
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int (ch);
	int (CH);
	for (ch = 'a'; ch <= 'z';)
	{
		putchar(ch);
		ch++;
	}
	for (CH = 'A'; CH <= 'Z';)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
