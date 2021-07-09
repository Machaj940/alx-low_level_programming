#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of ints
 * @a: an array
 * @n: size of array
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
