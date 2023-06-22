#include "monty.h"

/**
  * stack_len - compute length of stack (doubly linked list).
  * @stack: pointer to top of stack.
  * Return: length of stack.
  */
int stack_len(stack_t *stack)
{
	stack_t *tmp;
	int count = 0;

	if (stack == NULL)
		return (count);
	tmp = (stack_t *)stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
