#include "monty.h"

/**
 * push - check the code .
 * @stack: stack
 * @line_number: line_number
 * Return:
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void) line_number;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = global_var;
	new->prev = NULL;

	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
		return;
	}
	new->next = *stack;
	(*stack)->prev = new;
	*stack = new;
}
