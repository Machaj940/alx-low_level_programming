#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of linked list
 * @head: pointer to pointer to head of a list
 * @n: data to add in the linked list
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new_node;

  if (head == NULL)
    return (NULL);

  new_node = (dlistint_t*)malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    return (NULL);
  new_node->n = n;
  new_node->next = (*head);
  new_node->prev = NULL;
  if ((*head) != NULL)
    (*head)->prev = new_node;

  (*head) = new_node;
  return (head);
}
