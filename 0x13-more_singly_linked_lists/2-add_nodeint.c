#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: linked list head
 * @n: integer value
 * Return: address of the new element or NULL if it fails
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;
	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}