#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of
  * a linked list.
  * @head: pointer to pointer to head of the linked list
  * @n: int variable in the linked list.
  *
  * Return: address of the new element or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head != NULL)
	{
		newnode = malloc(sizeof(listint_t));

		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = (*head);
		(*head) = newnode;
	}
		return (newnode);

	return (0);
}


