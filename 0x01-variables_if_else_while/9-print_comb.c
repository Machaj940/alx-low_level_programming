#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * Description: print '0, 1, 2, 3, 4, 5, 6, 7, 8, 9$' using | cat -e
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int (ch);
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
