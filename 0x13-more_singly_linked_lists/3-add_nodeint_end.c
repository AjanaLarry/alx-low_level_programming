#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: linked list head
 * @n: integer value
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_pt;
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	next_pt = *head;

	while (next_pt->next != NULL)
		next_pt = next_pt->next;
	next_pt->next = new_n;
	return (new_n);
}
