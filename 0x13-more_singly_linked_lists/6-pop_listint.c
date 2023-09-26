#include "lists.h"

/**
 * pop_listint - function that deletes the
 * head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to first node
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *fleeting;
	int del;

	if (!head || !*head)
	{
		return (0);
	}
	del = (*head)->n;
	fleeting = (*head)->next;
	free(*head);
	*head = fleeting;

	return (del);
}
