#include "monty.h"

/**
  * add - add top two elements of stack, and replace them with sum.
  * @top: address of pointer to top of stack.
  * @line_number: line number of opcode in script..
  */
void add(stack_t **top, unsigned int line_number)
{
	int len, a, b;

	len = stack_len(*top);
	if (len < 2)
		exit_point(8, line_number, NULL);
	a = (*top)->n;
	pop(top, line_number);
	b = (*top)->n;
	pop(top, line_number);
	data = a + b;
	push(top, line_number);
}
