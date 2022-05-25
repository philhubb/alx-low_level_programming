#include "lists.h"
#include "lists.h"

/**
 * free_list - Frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
