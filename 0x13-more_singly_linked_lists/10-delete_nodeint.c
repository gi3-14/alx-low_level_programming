#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: a pointer to the head node the list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *the_previous = NULL, *the_next;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		the_next = *head;
		*head = the_next->next;
		free(the_next);
		return (1);
	}
	else
	{
		the_previous = *head;
		for (counter = 0; counter < (index - 1); counter++)
		{
			the_previous = the_previous->next;
			if (!the_previous)
				return (-1);
		}
		the_next = the_previous->next;
		the_previous->next = the_next->next;
		free(the_next);
	}
	return (1);
}
