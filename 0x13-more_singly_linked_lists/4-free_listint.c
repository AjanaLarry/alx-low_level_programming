#include "lists.h"

/**
* free_listint - frees a linked_list
* @head: linked_list head
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *free_pt;

	while (head != NULL)
	{
		free_pt = head;
		head = head->next;
		free(free_pt);
	}
}
