#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to head node of list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * @head: double pointer to head of dlistint_t linked list
 * @index: positionof node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;

	temp = *head;
	if (*head == NULL || index > dlistint_len(temp))
		return (-1);
	if (index == 0 && temp->next)
	{
		temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	else if (index == 0 && temp)
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	while (idx < index)
	{
		temp = temp->next;
		idx++;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
