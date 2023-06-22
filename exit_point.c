#include "monty.h"

/**
  * exit_point - exit in case of error and print message.
  * @sig: integer indicating error.
  * @line_number: line number of script at time of error.
  * @str: filename/opcode depending on the error.
  */
void exit_point(int sig, unsigned int line_number, char *str)
{
	if (sig == 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
	}
	else if (sig == 1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", str);
	}
	else if (sig == 2)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}
	else if (sig == 3)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number,
				str);
	}
	exit(EXIT_FAILURE);
}
