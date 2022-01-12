#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list with a double pointer
 * @head: double pointer to the first node of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	void *j;

	if (head == NULL)
		return;

	while (*head)
	{
		j = *head;
		*head = (*head)->next;
		free(j);
	}
}
