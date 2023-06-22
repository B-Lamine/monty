#include "monty.h"

/**
  * sub - subtract top two elemnts of stack and replace them with result.
  * @top: address of pointer to top of stack.
  * @line_number: line number of opcode in script..
  */
void sub(stack_t **top, unsigned int line_number)
{
	int len, a, b;

	len = stack_len(*top);
	if (len < 2)
		exit_point(8, line_number, "sub");
	a = (*top)->n;
	pop(top, line_number);
	b = (*top)->n;
	pop(top, line_number);
	data = a - b;
	push(top, line_number);
}
