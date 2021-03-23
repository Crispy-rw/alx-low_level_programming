#include "lists.h"

/**
* get_nodeint_at_index - Write a function that returns the nth
*node of a listint_t linked list.
*@head: pointer to head node
*@index: index
*Return: pointer to node
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int counter = 0;
listint_t *current;

if (head == NULL)
return (NULL);

current = head;

while (counter <= index && current != NULL)
{
current = current->next;
counter++;
}

if (counter < index)
return (NULL);


return (current);
}
