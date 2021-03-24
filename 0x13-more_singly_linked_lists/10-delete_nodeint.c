#include "lists.h"

/**
* delete_nodeint_at_index - Write a function that deletes the node at index
*index of a listint_t linked list.
*@head: head
*@index: index to remove
* Return: int
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int count;

	listint_t *current = *head;

	listint_t *previous = *head;

	count = 0;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (count < index  && current != NULL)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
