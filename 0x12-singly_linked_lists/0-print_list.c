#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print 
 * Return: no of nodes in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int length = 0;
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
