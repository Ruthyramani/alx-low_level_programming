#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in doubly linked lists
 * @head: first node of the list
 * Return: sum of all the integers in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
