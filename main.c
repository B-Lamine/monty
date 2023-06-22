#include "monty.h"

int data = 0;

/**
  * main - entry point for monty interpreter.
  * @ac: number of arguments.
  * @av: array of strings passed to program.
  * Return: EXIT_SUCCESS, otherwise EXIT_FAILURE.
  */
int main(int ac, char *av[])
{
	FILE *fp;
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	char buf[BUFSIZE], *ar[BUFSIZE];
	void (*operation)(stack_t **, unsigned int);

	if (ac != 2)
		exit_point(0, line_number, NULL);
	fp = fopen(av[1], "r");
	if (fp == NULL)
		exit_point(1, line_number, av[1]);
	while ((fgets(buf, BUFSIZE, fp)) != NULL)
	{
		buf[strlen(buf) - 1] = '\0';
		if (_strspn(buf, ALPHABET) == 0)
		{
			line_number++;
			continue;
		}
		parse(ar, buf, SPACE);
		operation = get_op_func(ar[0]);
		if (operation == NULL)
		{
			free_stack(stack);
			fclose(fp);
			exit_point(3, line_number, ar[0]);
		}
		if ((ar[1] != NULL) && (strspn(ar[1], ALPHABET) == 0))
			data = atoi(ar[1]);
		operation(&stack, line_number);
		line_number++;
	}
	fclose(fp);
	free_stack(stack);
	exit(EXIT_SUCCESS);
}
