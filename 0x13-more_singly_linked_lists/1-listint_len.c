#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t list.
 * @h: head of the list.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter;

	if (!h)
		return (0);
	for (counter = 0; h; counter++)
	{
		h = h->next;
	}
	return (counter);
}
