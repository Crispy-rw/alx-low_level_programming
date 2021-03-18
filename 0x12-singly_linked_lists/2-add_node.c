#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add a node a the head of the a linked list
* @head: a double pointer to a head node
* @str: string to add
* Return: New Add Node
*/


list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	if (new_node->str != '\0')
	{
		while (new_node->str[count] != '\0')
		count++;
	}

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
