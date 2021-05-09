#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to head node of doubly linked list
 *
 * Return: no return value (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
