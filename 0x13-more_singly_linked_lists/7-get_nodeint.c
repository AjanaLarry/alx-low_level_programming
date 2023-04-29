#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to linked list head
 * @index: index of the node
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
