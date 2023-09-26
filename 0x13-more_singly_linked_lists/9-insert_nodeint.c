#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: first element of list
 * @idx: new node to be added
 * @n: data to  be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *latest;
	listint_t *fleeting = *head;
	unsigned int x;

	latest = malloc(sizeof(listint_t));
	if (!latest || !head)
	{
		return (NULL);
	}
	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;

		return (latest);
	}

	for (x = 0; fleeting && x < idx; x++)
	{
		if (x == idx - 1)
		{
			latest->next = fleeting->next;
			fleeting->next = latest;
			return (latest);
		}
		else
		{
			fleeting = fleeting->next;
		}
	}
		return (NULL);
}
