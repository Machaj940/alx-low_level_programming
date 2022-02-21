#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a linked list
 * @head: pointer to pointer to head of a list
 * @n: data to add in the linked list
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new_node;
  dlistint_t *last = *head;

  if (head == NULL)
    return (NULL)

  new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    return (NULL);

  new_node->n = n;
  if (*head == NULL)
  {
    new_node->prev = NULL;
    *head = new_node;
    return (*head);
  }
  while (last->next != NULL)
    last = last->next;
  last->next = new_node;
  new_node->prev = last;
  return (*head);
}
