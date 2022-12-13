#include "monty.h"

/**
 * free_all - free all and close the file
 * @stack: list to free
 * @line: line of getline to free
 * @file: file to close
 */

void free_all(stack_t *stack, char *line, FILE *file)
{
	stack_t *tmp = stack;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
	free(line);
	fclose(file);
}
