#include "monty.h"
#include <stdio.h>
#include <stddef.h>

/**
  * pall - print contents of stack (implementation: doubly linked list).
  * @head: address of pointer to first node.
  * @line_number: line number in script.
  */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	if (head == NULL)
	{
		fprintf(stderr, "error at %d", line_number);
	}
	tmp = (stack_t *)*head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
