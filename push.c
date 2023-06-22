#include "monty.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * push - push element on top of stack (implementation: doubly linked list).
  * @head: address of pointer to top of stack.
  * @line_number: line number of the script.
  */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		exit_point(2, line_number, NULL);
	if (*head != NULL)
		(*head)->prev = new;
	new->n = data;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
