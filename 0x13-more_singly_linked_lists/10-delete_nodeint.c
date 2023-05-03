#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at index of a linked list
* @head: pointer to head of linked list
* @index: index of node to delete
* Return: 1 for success, -1 for failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next_pt;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next_pt = *head;
	prev = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(next_pt);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (next_pt == NULL)
			return (-1);
		prev = next_pt;
		next_pt = next_pt->next;
	}
	if (prev)
		prev->next = next_pt->next;
	free(next_pt);

	return (1);
}
