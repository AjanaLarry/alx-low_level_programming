#include "lists.h"
/**
 * listint_len - func that  returns the number of elements 
 * in a linked list
 * @h: linked list head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

