include "holberton.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: a pointer to an int
 * @b: a pointer to an int
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
