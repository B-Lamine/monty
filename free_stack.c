#include "monty.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * free_stack - free stack (implementation: doubly linked list).
  * @head: pointer to first node.
  */
void free_stack(stack_t *head)
{
	stack_t *cursor;

	if (head == NULL)
		return;
	cursor = head;
	while (cursor->next->next != NULL)
		cursor = cursor->next;
	while (cursor != NULL)
	{
		free(cursor->next);
		cursor = cursor->prev;
	}
	free(head);
}
