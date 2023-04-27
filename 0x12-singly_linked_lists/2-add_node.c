#include "lists.h"

/**
* add_node - add a new node to the beginning of a linked_list
* @head: points to a linked_list
* @str: string
* Return: linked_list
**/

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	for (i = 0; str[i] != '\0';)
		i += 1;

	new->str = string;
	new->next = *head;
	new->len = i;
	*head = new;
	return (*head);
}
