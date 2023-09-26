#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: first element of list
 * @index: element to be returned
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *fleeting = head;
	unsigned int x = 0;

	while (fleeting && x < index)
	{
		fleeting = fleeting->next;
		x++;
	}
	return (fleeting);
}
