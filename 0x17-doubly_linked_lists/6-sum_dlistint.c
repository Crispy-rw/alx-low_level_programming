#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a dlistint_t linked list
 * @head: pointer to the head of doubly linked list dlistint_t.
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
