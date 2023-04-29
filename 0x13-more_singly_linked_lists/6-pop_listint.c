#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: pointer to pointer that points to linked list
 * Return: node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *free_n;
	int n;

	free_n = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = free_n->next;
	n = free_n->n;
	free(free_n);
	return (n);
}
