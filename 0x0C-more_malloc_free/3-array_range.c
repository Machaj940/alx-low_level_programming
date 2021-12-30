#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
