#include "lists.h"
/**
 * *get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: position in the linked list to be printed
 * Return: returns the nth node of a listint_t linked list or if
 * the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node_data;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	node_data = head;
	return (node_data);
}
