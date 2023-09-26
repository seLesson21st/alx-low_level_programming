#include "lists.h"

/**
 * listint_len - function that returns the number
 *  of elements in a linked listint_t list.
 *  @h: linked list
 *  Return: number of elemnts(nodes)
 */

size_t listint_len(const listint_t *h)
{
	unsigned int digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}
	return (digit);
}
