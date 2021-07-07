#include "holberton.h"
/**
 * reverse_array - reverse the content of a n array of integers
 * @a: an array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int tmp;

	for (int low = 0, high = n - 1; low < high; low++, high--)
	{
		tmp = a[low];
		a[low] = a[high];
		a[high] = tmp;
	}
}
