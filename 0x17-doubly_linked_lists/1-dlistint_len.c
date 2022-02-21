#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the linked list
 * Return:  number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
