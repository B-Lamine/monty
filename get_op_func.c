#include "monty.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
  * get_op_func - get function that corresponds to opcode.
  * @s: opcode.
  * Return: pointer to function that takes a stack_t and unsigned int.
  */
void (*get_op_func(char *s))(stack_t **, unsigned int)
{
	instruction_t ops[] = {{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
