#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: linked list head
 * @n: integer value
 * Return: address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_N;
	if (head == NULL)
		return (NULL);

	new_N = malloc(sizeof(listint_t));
	if (new_N == NULL)
		return (NULL);
	new_N->n = n;
	new_N->next = *head;
	*head = new_N;

	return (new_N);
}
