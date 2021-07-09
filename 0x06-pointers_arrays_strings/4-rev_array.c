#include "holberton.h"
/**
 * reverse_array - reverse the content of a n array of integers
 * @a: an array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int c, t;

	for (c = 0; c < n / 2; c++)
	{
		t = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = t;
	}
}
