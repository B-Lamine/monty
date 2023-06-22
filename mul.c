#include "monty.h"

/**
  * mul - multiply top two elements of stack, and replace then with product.
  * @top: address of pointer to top of stack.
  * @line_number: line number of opcode in script..
  */
void mul(stack_t **top, unsigned int line_number)
{
	int len, a, b;

	len = stack_len(*top);
	if (len < 2)
		exit_point(8, line_number, "mul");
	a = (*top)->n;
	pop(top, line_number);
	b = (*top)->n;
	pop(top, line_number);
	data = a * b;
	push(top, line_number);
}
