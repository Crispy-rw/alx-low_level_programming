#include "lists.h"


/**
* print_listint - print elements in a linked list
* @h: head
* Return: size_t if h is not null
*/


size_t print_listint(const listint_t *h)
{

int count = 0;
const listint_t *current = h;

while (current != NULL)
{
	if (current->n != '\0')
	{
	printf("%d\n", current->n);
	current = current->next;
	}
	count++;
}
return (count);

}
