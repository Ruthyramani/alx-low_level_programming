#include "lists.h"

/**
 * listint_len - counts the number of nodes in the linked list
 * @h: head of the list
 * Return: the number of the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
			count++;
	}
	return (count);
}
