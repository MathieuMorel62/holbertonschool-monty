#include "monty.h"

/**
 * sub - subtracts the top element of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the line
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int result;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	result = temp->next->n - temp->n;
	temp->next->n = result;

	*stack = temp->next;

	free(temp);
}
