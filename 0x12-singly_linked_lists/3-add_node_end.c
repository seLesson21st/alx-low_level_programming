#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the original list
 * @str: node to be added
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent_node;
	list_t *present_node;
	unsigned int x = 0;

	recent_node = malloc(sizeof(list_t));

	if (recent_node == NULL)
		return (NULL);
	recent_node->str = strdup(str);
	for (x = 0; str[x]; x++)
		;
	recent_node->len = x;
	recent_node->next = NULL;
	present_node = *head;

	if (present_node == NULL)
	{
		*head = recent_node;
	}
	else
	{
		while (present_node->next != NULL)
			present_node = present_node->next;
	}
		return (*head);
}
