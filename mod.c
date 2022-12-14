#include "monty.h"

/**
 * mod - computes the rest of the division
 * @stack: pointer to the head of the stack
 * @line_number: number of the line
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int result;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;

	result = temp->next->n % temp->n;
	temp->next->n = result;

	*stack = temp->next;

	free(temp);
}
