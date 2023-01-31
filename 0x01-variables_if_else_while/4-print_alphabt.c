#include <stdio.h>
/**
 * main - print the alphabet in lowercase except 'q' & 'e'
 * Description: print "a-z" except q & e
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
