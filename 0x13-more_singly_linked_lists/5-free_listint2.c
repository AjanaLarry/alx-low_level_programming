#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of linked list head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *free_pt;

	if (head == NULL)
		return;
	free_pt = *head;
	while (free_pt != NULL)
	{
		free_pt = free_pt->next;
		free(*head);
		*head = free_pt;
	}
	*head = NULL;
}
