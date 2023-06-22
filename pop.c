#include "monty.h"

/**
  * pop - pop element on top of the stack (implementation: doubly linked list).
  * @top: address of pointer to top of stack.
  * @line_number: number of line of opcode in script.
  */
void pop(stack_t **top, unsigned int line_number)
{
	stack_t *tmp, *cursor;

	if (*top == NULL)
		exit_point(6, line_number, NULL);
	tmp = *top;
	cursor = tmp->next;
	*top = cursor;
	free(tmp);
	if (cursor != NULL)
		cursor->prev = NULL;
}
