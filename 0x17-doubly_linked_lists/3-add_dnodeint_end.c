#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of the linked list
 * @head: pointer to the linked list
 * @n: value of node
 * Return: pointer to the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	if (!head)
		return (NULL);
	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!temp)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	while (1)
	{
		if (!temp->next)
			break;
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;
	new->next = NULL;
	return (new);
}
