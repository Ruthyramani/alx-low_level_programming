#include "list.h"

/**
 * listint_len - counts the number of nodes in the linked list
 * @h: head of the list
 * Return: the number of the elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
