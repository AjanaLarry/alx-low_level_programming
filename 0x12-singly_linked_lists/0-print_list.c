#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: linked list head
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int  size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
