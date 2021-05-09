#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to head of doubly linked list
 * @n: int variable to initialize new node with
 *
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
