#include "lists.h"

/**
 * add_node - function that adds a new node at
 *  the beginning of a list_t list
 *  @head: pointer to the original list
 *  @str: String to be added to the node
 *  Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int node = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[node])
		node++;
	temp->len = node;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
