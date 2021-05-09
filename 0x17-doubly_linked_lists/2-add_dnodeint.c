#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to head node of list
 * @n: int variable to initialize new node
 *
 * Return: address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode,  *temp;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	temp = *head;
	if (temp == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	newnode->next = temp;
	temp->prev = newnode;
	*head = newnode;
	return (newnode);
}
