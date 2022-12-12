#include "main.h"

/**
 * swap - check the code .
 * @stack: stack
 * @line_number: unused in this fonction
 * Return: to main.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *top = *stack;
	*stack = (*stack)->next;
	top->next = (*stack)->next;
	top->prev = *stack;
	(*stack)->next = top;
	(*stack)->prev = NULL;
}
