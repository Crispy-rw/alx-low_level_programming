#include "lists.h"


size_t print_listint(const listint_t *h)
{

unsigned int count = 0;
const listint_t *current = h;

while (current != NULL)
{

	printf("%d \n", current->n);
	current = current->next;
	count++;
}
return (count);

}