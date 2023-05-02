#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head:pointer to first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *currrent = head;

	while (current != NULL && counter < index)
	{
		current = current->next;
		counter++;
	}

	if (counter < index || current == NULL)
	{
		return (NULL);
	}
	else
	{
	return (current);
	}
}

