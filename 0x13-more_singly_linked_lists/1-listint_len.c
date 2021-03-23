#include "lists.h"


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
