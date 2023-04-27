#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
