#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A function that pointts the pointer to the first 
 * node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
