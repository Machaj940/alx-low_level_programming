#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head - pointer to the first node of linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	void *j;

	while (head)
	{
		j = head;
		head = head->next;
		free(j);
	}
}
