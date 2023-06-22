#include "monty.h"

/**
  * pint - print data at top of the stack.
  * @top: address of pointer to top of stack.
  * @line_number: line number of opcode in sciprt.
  */
void pint(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
		exit_point(5, line_number, NULL);
	fprintf(stdout, "%d\n", (*top)->n);
}
