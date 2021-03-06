#include <stdio.h>
/**
 * main - print the alphabet in lowercase except 'q' & 'e'
 * Description: print "a-z" except q & e
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int ch = 'a';

	do {
		if (ch == 'e')
		{
			ch++;
			continue;
		}
		if (ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
