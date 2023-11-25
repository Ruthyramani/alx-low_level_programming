#include "list.h"

/**
 * pop_listint - deletes the headof the node
 * @head: pointer to the head of the linked list
 * Return: head node data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
	return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
