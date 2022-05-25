#include "lists.h"
/**
 * list_len - ..
 * @h: ..
 * Return:..
 */
size_t list_len(const list_t *h)

{
	unsigned int length = 0;

	if (!h)
	{
		return (length);
	}
	for (; h; length++)
	{
		h = h->next;
	}
	return (length);
}
