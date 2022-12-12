#include "main.h"

/**
 * pop - removes the top element of the stack.
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *top = *stack;
	*stack = (*stack)->next;

	free(top);
}
