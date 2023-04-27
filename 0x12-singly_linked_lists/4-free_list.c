#include "lists.h"

/**
* free_list - frees a linked_list
* @head: pointer to the head of a linked_list
* Return: void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
