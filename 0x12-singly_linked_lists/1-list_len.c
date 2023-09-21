#include "lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: Source of linked argument
 * Return: Number of elements found
 */

size_t list_len(const list_t *h)
{
	size_t total = 0;

	while (h)
	{
		h = h->next;
		total++;
	}
	return (total);
}
