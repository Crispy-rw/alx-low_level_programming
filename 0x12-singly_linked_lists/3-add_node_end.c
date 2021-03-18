#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*add_node_end - add node to tail
*@head: head node
*@str: str to add
*
*Return: coid
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	/* now we can add a new variable */
	current->next = (list_t *) malloc(sizeof(list_t));
	if (current->next == NULL)
		return (NULL);

	current->next->str = strdup(str);
	if (current->next->str != '\0')
	{
		while (current->next->str[count] != '\0')
		count++;
	}
	current->next->len = count;
	current->next->next = NULL;
	return (current->next);
}
