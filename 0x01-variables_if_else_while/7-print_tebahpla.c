#include <stdio.h>
/**
 * main - print the alphabet in lowercase in reverse
 * Description: print 'abcdefghijklmnopqrstuvwxyz" in reverse
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int (ch);
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
