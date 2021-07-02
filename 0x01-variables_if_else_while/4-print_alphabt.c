#include <stdio.h>
/**
 * main - print the alphabet in lowercase except 'q' & 'e'
 * Description: print 'abcdfghijklmnoprstuvwxyz"
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		while (ch == 'q')
		{
			continue;
		}
		while (ch == 'e')
		{
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
