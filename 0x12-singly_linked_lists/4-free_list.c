#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the head of the linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *present_node;

	while ((present_node = head) != NULL)
	{
		head->next = head;
		free(present_node->str);
		free(present_node);
	}
}
