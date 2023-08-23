#include "monty.h"

/**
 * _pall - print the whole stack
 * @head: stack head
 * @count: void not used
 * Return: void
 */

void _pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (!head)
		return (NULL);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
