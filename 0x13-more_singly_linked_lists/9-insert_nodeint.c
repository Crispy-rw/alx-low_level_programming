#include "lists.h"

/**
* insert_nodeint_at_index - Write a function that inserts a
*new node at a given position.
* @head: pointer to the head node
* @idx: index to insert node
* @n: int to insert
* Return: new note of type listint_t
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node, *temp;
	unsigned int count;

	new_node = (listint_t *)(malloc(sizeof(listint_t)));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	count = 0;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	return (new_node);
	}
	while (count < (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}


