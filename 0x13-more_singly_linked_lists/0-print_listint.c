#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
