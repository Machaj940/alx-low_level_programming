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
	for (ch = 'a'; ch <= 'z';)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
