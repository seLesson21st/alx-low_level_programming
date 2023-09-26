#include "lists.h"

/**
 * revers_listint -  function that reverses a listint_t linked list.
 * @head: first element of list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *undo = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = undo;
		undo = *head;
		*head = next;
	}
	*head = undo;
	return (*head);
}
