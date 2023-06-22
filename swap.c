#include "monty.h"

/**
  * swap - swat top two elements of stack.
  * @top: address of pointer to top of stack.
  * @line_number: number of line of opcode in sciprt.
  */
void swap(stack_t **top, unsigned int line_number)
{
	int len;
	stack_t *tmp, *cursor1, *cursor2;

	len = stack_len(*top);
	if (len < 2)
		exit_point(7, line_number, NULL);
	tmp = *top;
	cursor1 = tmp->next;
	cursor2 = tmp->next->next;
	tmp->next = cursor2;
	tmp->prev = cursor1;
	if (cursor2 != NULL)
		cursor2->prev = tmp;
	cursor1->next = tmp;
	cursor1->prev = NULL;
	*top = cursor1;
}
