#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list, and returns the head
 * node’s data (n)
 * @head: double pointer to the first node of the linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int result;

	if (*head == NULL || head == NULL)
		return (0);

	new_head = *head;
	*head = new_head->next;
	result = new_head->n;

	free(new_head);

	return (result);
}
