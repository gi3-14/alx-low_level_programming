#include "lists.h"
/**
 * print_list - ..
 * @h: ..
 * Return:..
 */
size_t print_list(const list_t *h)
{
	unsigned int length = 0;

	if (!h)
	{
		return (length);
	}
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		length++;
		h = h->next;
	}
	return (length);
}

