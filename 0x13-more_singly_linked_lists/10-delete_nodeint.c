#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *  at index of a listint_t linked list.
 *  @head: first element of list
 *  @index: node to be deleted
 *  Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fleeting = *head;
	listint_t *latest = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(fleeting);
		return (1);
	}
	while (x < index - 1)
	{
		if (!fleeting || !(fleeting->next))
		{
			return (-1);
		}
		fleeting = fleeting->next;
		x++;
	}
	latest = fleeting->next;
	fleeting->next = latest->next;
	free(latest);

	return (1);
}
