#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position given its value
 * @head: pointer to the first element of the list
 * @idx: insertion point
 * @n: value of new node to insert
 * Return: new inserted node upon SUCCESS otherwise return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
		int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && *head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	tmp = *head;
	while (tmp)
	{
		if (count == idx)
		{
			new->next = tmp;
			(tmp->prev)->next = new;
			new->prev = tmp->prev;
			tmp->prev = new;
			return (new);
		}
		++count;
		if (count == idx && tmp->next == NULL)
		{
			new->next = NULL;
			new->prev = tmp;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
