#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: A string to insert into the new node.
 * Return: Pointer of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

