#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node of doubly linked list
 * @index: index of node to return
 *
 * Return: address of required node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (idx < index)
	{
		temp = temp->next;
		idx++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
