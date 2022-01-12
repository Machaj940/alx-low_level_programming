#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of linked list
 * @head: pointer to pointer to head of a list
 * @n: data to add in the linked list
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
