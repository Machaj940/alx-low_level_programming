#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns a value at a given index
 * @n: number to check the value of
 * @index: the index to look for the number
 * Return: a value at a given index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);
	/* iterating number to the right index */
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
