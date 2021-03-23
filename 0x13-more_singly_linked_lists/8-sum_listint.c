#include "lists.h"

/**
* sum_listint - add sum of nodes
* @head: head
* Return: sum
**/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *ptr;


	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		sum += ptr->n;

	}

	return (sum);
}
