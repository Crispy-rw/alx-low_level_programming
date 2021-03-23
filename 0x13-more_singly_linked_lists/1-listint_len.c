#include "lists.h"

/**
* listint_len - return number of nodes in a linked list
* @h: head node
*Return: size_t
*/


size_t listint_len(const listint_t *h)
{

unsigned int count = 0;
const listint_t *current = h;

while (current != NULL)
{

	current = current->next;
	count++;
}
return (count);

}
