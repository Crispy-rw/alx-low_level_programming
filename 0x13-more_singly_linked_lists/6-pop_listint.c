#include "lists.h"

/**
 * pop_listint - function to delete the head node of a linked list
 * @head: head of the linked list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
int number;
listint_t *ptr;

if (*head == NULL)
return (0);

ptr = *head;
*head = ptr->next;
number = ptr->n;
free(ptr);


return (number);

}
