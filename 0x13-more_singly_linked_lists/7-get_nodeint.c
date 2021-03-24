#include "lists.h"

/**
 * get_nodeint_at_index - print node
 * @head: pointer to the index
 * @index: index
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (ptr);
}
