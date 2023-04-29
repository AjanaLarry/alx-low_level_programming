#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to linked list head
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node_ptr;

	if (!head)
		return (0);
	node_ptr = head;
	sum = 0;
	while (node_ptr != NULL)
	{
		sum += node_ptr->n;
		node_ptr = node_ptr->next;
	}
	return (sum);
}
