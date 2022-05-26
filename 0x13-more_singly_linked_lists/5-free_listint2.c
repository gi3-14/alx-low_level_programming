#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list, and sets the head
 * to NULL
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head != NULL)
		while (*head)
		{
			temporary = (*head)->next;
			free(*head);
			(*head) = temporary;
		}
}
