#include "monty.h"

/**
 * add - adds the value of the top two nodes
 * @stack: stack
 * @line_number: line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	int sum = 0;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;

	pop(stack, line_number);
}
