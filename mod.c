#include "monty.h"

/**
  * mod - divide top element of stack by next one and replace them with
  * the rest of the division.
  * @top: address of pointer to top of stack.
  * @line_number: line number of opcode in script..
  */
void mod(stack_t **top, unsigned int line_number)
{
	int len, a, b;

	len = stack_len(*top);
	if (len < 2)
		exit_point(8, line_number, "mod");
	a = (*top)->n;
	if (a == 0)
		exit_point(9, line_number, NULL);
	pop(top, line_number);
	b = (*top)->n;
	pop(top, line_number);
	data = b % a;
	push(top, line_number);
}
