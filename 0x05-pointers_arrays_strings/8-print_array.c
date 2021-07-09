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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i < n)
			printf(", ");
	}
	putchar('\n');
}
