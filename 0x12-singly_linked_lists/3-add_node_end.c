#include "lists.h"

/**
* add_node - add a new node to the beginning of a linked_list
* @head: points to a linked_list
* @str: string
* Return: linked_list
**/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;
	list_t *next_ptr;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	i = 0;

	while (str[i] != '\0')
		i += 1;

	new->str = string;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	next_ptr = *head;

	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;

	next_ptr->next = new;
	return (*head);
}
