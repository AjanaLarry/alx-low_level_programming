#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to linked list head
 * Return: node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_pt, *prev_pt;

	prev_pt = NULL;
	while (*head != NULL)
	{
		next_pt = (*head)->next;
		(*head)->next = prev_pt;
		prev_pt = *head;
		*head = next_pt;
	}
	*head = prev_pt;
	return (*head);

}
