#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{


listint_t *current;
listint_t *new_node;

new_node = (listint_t *)malloc(sizeof(listint_t));
current = *head;

if (new_node == NULL)
return (NULL);

new_node->n = n;

if(*head == NULL)
{

*head = new_node;
return (new_node);

}
else
{

current = *head;

while (current->next != NULL)
current = current->next;

current->next = new_node;

}
return (current);

}
