#include "lists.h"

/**
* free_listint2  - free space occupied by the head node
* @head: head node
* Return: void
*/


void free_listint2(listint_t **head)
{

listint_t list;

if (head != NULL)
return (NULL);

while (*head)
{
list = *head;
*head = list->next;

free(list);
}

}
