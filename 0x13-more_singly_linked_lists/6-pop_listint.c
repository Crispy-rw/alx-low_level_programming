#include "lists.h"


/**
* pop_listint - remove the head node and free its momey
* @head: pointer to head
* Return: int
*/


int pop_listint(listint_t **head)
{

listint_t node;
unsigned int number;

if (node != NULL)
{
	node  = *head
	* head = node->next;
	number = node->n;
	free(node);
}
}
