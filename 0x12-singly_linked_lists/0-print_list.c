#include "lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list to source arguments
 * Return: the number of nodes and if NULL  print [0] (nil).
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
