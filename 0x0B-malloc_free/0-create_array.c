#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create an array of chars and initialize it
 * with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 * Return: char to initialize array with or null if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
