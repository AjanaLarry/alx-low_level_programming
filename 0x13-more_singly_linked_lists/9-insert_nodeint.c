#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: poniter to head of linked list
* @idx: index to be inserted at
* @n: integer value for inserted node
* Return: address of new node or NULL if it fails
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next_pt, *prev_pt, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	next_pt = *head;
	prev_pt = NULL;
	for (i = 0; i < idx; i += 1)
	{
		if (next_pt == NULL)
			return (NULL);
		prev_pt = next_pt;
		next_pt = next_pt->next;
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next_pt;
	if (idx == 0)
		*head = new;
	else
		prev_pt->next = new;

	return (new);
}
