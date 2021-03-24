#include "lists.h"

/**
* free_listint2  - free space occupied by the head node
* @head: head node
* Return: void
*/

void free_listint2(listint_t **head)
{

listint_t *ptr;

if (!head)
return;

while (*head != NULL)
{
ptr = *head;
*head = ptr->next;
free(ptr);
}

}
