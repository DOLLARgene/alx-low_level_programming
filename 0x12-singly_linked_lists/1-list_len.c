#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list.
 * @h: pointer to a struct list
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}