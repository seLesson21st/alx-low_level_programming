#include "lists.h"

/**
 *  sum_listint - function that returns the sum of all
 *  the data (n) of a listint_t linked list.
 *  @head: first element of list
 *  Result: gross sum, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *fleeting = head;
	int gross = 0;

	while (fleeting)
	{
		gross += fleeting->n;
		fleeting = fleeting->next;
	}
	return (int);
}

