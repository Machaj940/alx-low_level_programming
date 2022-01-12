#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a linked list
 * @h: pointer to the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
