#include "holberton.h"
/**
 * reverse_array - reverse the content of a n array of integers
 * @a: an array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int aux[n];

	for (int i = 0, i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
