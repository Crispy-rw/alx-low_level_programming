#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head node of doubly linked list dlistint_t
 * @idx: position to add new node in the list
 * @n: data to initialize new node with
 *
 * Return: address of new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int index = 0, count = 0;

	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	temp = *h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx == count)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *h;
	while (index < idx)
	{
		temp = temp->next;
		index++;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->prev = temp->prev;
	newnode->next = temp;
	temp->prev->next = newnode;
	temp->prev = newnode;
	return (newnode);
}
