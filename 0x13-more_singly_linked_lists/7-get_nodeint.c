#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at
 * a certain index in a linked list
 * @head: First node in the linked list
 * @index: index of the node to be returned
 * Return: pointer to the index node,or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
