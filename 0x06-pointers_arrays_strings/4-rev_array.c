#include "holberton.h"
/**
 * reverse_array - reverse the content of a n array of integers
 * @a: an array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;

	if (i >= n)
	{
		return;
	}
	int value = a[i];
	reverse_array(a, i + i, n);
	a[n - 1 -i] = value;
}
